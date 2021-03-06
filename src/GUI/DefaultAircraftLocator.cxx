#include "DefaultAircraftLocator.hxx"

#include <simgear/props/props_io.hxx>
#include <simgear/debug/logstream.hxx>

#include <Main/globals.hxx>

static SGPropertyNode_ptr loadXMLDefaults()
{
    SGPropertyNode_ptr root(new SGPropertyNode);
    const SGPath defaultsXML = globals->get_fg_root() / "defaults.xml";
    readProperties(defaultsXML, root);

    if (!root->hasChild("sim")) {
        SG_LOG(SG_GUI, SG_POPUP, "Failed to find /sim node in defaults.xml, broken");
        return SGPropertyNode_ptr();
    }

    return root;
}


namespace flightgear
{

std::string defaultAirportICAO()
{
    SGPropertyNode_ptr root = loadXMLDefaults();
    if (!root) {
        return std::string();
    }

    std::string airportCode = root->getStringValue("/sim/presets/airport-id");
    return airportCode;
}

string_list defaultSplashScreenPaths()
{
    string_list result;
    SGPath tpath = globals->get_fg_root() / "Textures";
    simgear::Dir d(tpath);
    for (auto c : d.children(simgear::Dir::TYPE_FILE, ".png")) {
        if (c.file_base().find("Splash") == 0) {
            result.push_back(c.utf8Str());
        }
    }

    return result;
}

DefaultAircraftLocator::DefaultAircraftLocator()
{
    SGPropertyNode_ptr root = loadXMLDefaults();
    if (root) {
        _aircraftId = root->getStringValue("/sim/aircraft");
    } else {
        SG_LOG(SG_GUI, SG_WARN, "failed to load default aircraft identifier");
        _aircraftId = "ufo"; // last ditch fallback
    }

    _aircraftId += "-set.xml";
    const SGPath rootAircraft = globals->get_fg_root() / "Aircraft";
    visitDir(rootAircraft, 0);
}

SGPath DefaultAircraftLocator::foundPath() const
{
    return _foundPath;
}

AircraftDirVistorBase::VisitResult
DefaultAircraftLocator::visit(const SGPath& p)
{
    if (p.file() == _aircraftId) {
        _foundPath = p;
        return VISIT_DONE;
    }

    return VISIT_CONTINUE;
}

WeatherScenariosModel::WeatherScenariosModel(QObject *pr) :
    QAbstractListModel(pr)
{
    SGPropertyNode_ptr root = loadXMLDefaults();
    if (root) {
        SGPropertyNode_ptr scenarios = root->getNode("environment/weather-scenarios");
        Q_ASSERT(scenarios);
        int nChildren = scenarios->nChildren();
        for (int i = 0; i < nChildren; i++) {
            SGPropertyNode_ptr scenario = scenarios->getChild(i);
            if (strcmp(scenario->getName(), "scenario") != 0) {
                continue;
            }

            // omit the 'live data' option, we have a distinct UI for that, we'll
            // pass --real-wxr option on launch
            if (scenario->getStringValue("local-weather/tile-type") == std::string("live")) {
                continue;
            }

            WeatherScenario ws;
            ws.name = QString::fromStdString(scenario->getStringValue("name"));
            ws.description = QString::fromStdString(scenario->getStringValue("description")).simplified();
            ws.metar = QString::fromStdString(scenario->getStringValue("metar"));
            if (scenario->hasChild("local-weather")) {
                ws.localWeatherTileManagement = QString::fromStdString(scenario->getStringValue("local-weather/tile-management"));
                ws.localWeatherTileType = QString::fromStdString(scenario->getStringValue("local-weather/tile-type"));
            }
            m_scenarios.push_back(ws);
        }
    }
}

int WeatherScenariosModel::rowCount(const QModelIndex&) const
{
    return static_cast<int>(m_scenarios.size());
}

QVariant WeatherScenariosModel::data(const QModelIndex &index, int role) const
{
    const int row = index.row();
    if ((row < 0) || (row >= m_scenarios.size())) {
           return QVariant();
    }

    const WeatherScenario& scenario(m_scenarios.at(row));
    if ((role == Qt::DisplayRole) || (role == NameRole)) {
        return scenario.name;
    } else if (role == DescriptionRole) {
        return scenario.description;
    } else if (role == MetarRole) {
        return scenario.metar;
    }

    return QVariant();
}

QHash<int, QByteArray> WeatherScenariosModel::roleNames() const
{
    QHash<int, QByteArray> result;
    result[NameRole] = "name";
    result[DescriptionRole] = "description";
    result[MetarRole] = "metar";
    return result;
}

QString WeatherScenariosModel::metarForItem(quint32 index) const
{
    if (index >= m_scenarios.size()) {
        return {};
    }

    return m_scenarios.at(index).metar;
}

QString WeatherScenariosModel::descriptionForItem(quint32 index) const
{
    if (index >= m_scenarios.size()) {
        return {};
    }

    return m_scenarios.at(index).description;
}

QStringList WeatherScenariosModel::localWeatherData(quint32 index) const
{
    if (index >= m_scenarios.size()) {
        return {};
    }

    const auto& s = m_scenarios.at(index);
    if (s.localWeatherTileManagement.isEmpty() || s.localWeatherTileType.isEmpty()) {
        return {};
    }

    return QStringList() << s.localWeatherTileManagement << s.localWeatherTileType;
}

QString WeatherScenariosModel::nameForItem(quint32 index) const
{
    if (index >= m_scenarios.size()) {
        return {};
    }

    return m_scenarios.at(index).name;
}

} // of namespace flightgear
