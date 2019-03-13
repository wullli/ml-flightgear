/********************************************************************************
** Form generated from reading UI file 'InstallSceneryDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTALLSCENERYDIALOG_H
#define UI_INSTALLSCENERYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InstallSceneryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stack;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QLabel *introText;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *description;
    QSpacerItem *verticalSpacer_2;
    QLabel *progressText;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *resultsSummaryLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InstallSceneryDialog)
    {
        if (InstallSceneryDialog->objectName().isEmpty())
            InstallSceneryDialog->setObjectName(QString::fromUtf8("InstallSceneryDialog"));
        InstallSceneryDialog->resize(528, 311);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app-icon-large"), QSize(), QIcon::Normal, QIcon::Off);
        InstallSceneryDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(InstallSceneryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stack = new QStackedWidget(InstallSceneryDialog);
        stack->setObjectName(QString::fromUtf8("stack"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        introText = new QLabel(page);
        introText->setObjectName(QString::fromUtf8("introText"));
        introText->setWordWrap(true);
        introText->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(introText);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout_2->setStretch(1, 1);
        stack->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        description = new QLabel(page_2);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(description);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        progressText = new QLabel(page_2);
        progressText->setObjectName(QString::fromUtf8("progressText"));

        verticalLayout_3->addWidget(progressText);

        progressBar = new QProgressBar(page_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximum(100);
        progressBar->setValue(-1);

        verticalLayout_3->addWidget(progressBar);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        verticalLayout_3->setStretch(3, 1);
        stack->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        resultsSummaryLabel = new QLabel(page_3);
        resultsSummaryLabel->setObjectName(QString::fromUtf8("resultsSummaryLabel"));
        resultsSummaryLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        resultsSummaryLabel->setWordWrap(true);

        verticalLayout_4->addWidget(resultsSummaryLabel);

        stack->addWidget(page_3);

        verticalLayout->addWidget(stack);

        buttonBox = new QDialogButtonBox(InstallSceneryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InstallSceneryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InstallSceneryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InstallSceneryDialog, SLOT(reject()));

        stack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(InstallSceneryDialog);
    } // setupUi

    void retranslateUi(QDialog *InstallSceneryDialog)
    {
        InstallSceneryDialog->setWindowTitle(QApplication::translate("InstallSceneryDialog", "Install scenery", nullptr));
        introText->setText(QApplication::translate("InstallSceneryDialog", "<html><head/><body><p>The easiest way to automatically install scenery is to use TerraSync. If you prefer to download and install scenery manually, you can use this dialog to extract and install the files in the correct place. (<a href=\"http://ns334561.ip-5-196-65.eu/~fgscenery/WS2.0/scenery-2.0.1.html\"><span style=\" text-decoration: underline; color:#0000ff;\">Click here to download scenery</span></a>)</p><p>Files will be extracted and installed to a 'Scenery' folder inside your chosen downloads location (currently %1), after which you can delete the archives if you wish.</p><p>To begin, click 'Next' and select one or more downloaded scenery archives, which have names such as 'w010n40.tar.gz'</p></body></html>", nullptr));
        description->setText(QApplication::translate("InstallSceneryDialog", "Please wait, verifying and extracting scenery...", nullptr));
        progressText->setText(QApplication::translate("InstallSceneryDialog", "TextLabel", nullptr));
        resultsSummaryLabel->setText(QApplication::translate("InstallSceneryDialog", "Successfully installed the scenery files to '%1'. This location will be added to the list of additional sceneries to be used.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstallSceneryDialog: public Ui_InstallSceneryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTALLSCENERYDIALOG_H
