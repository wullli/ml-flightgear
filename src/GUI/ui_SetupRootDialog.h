/********************************************************************************
** Form generated from reading UI file 'SetupRootDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPROOTDIALOG_H
#define UI_SETUPROOTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SetupRootDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *bigIcon;
    QDialogButtonBox *buttonBox;
    QLabel *versionLabel;
    QPushButton *useDefaultsButton;
    QPushButton *downloadButton;
    QLabel *promptText;
    QPushButton *browseButton;
    QLabel *useDefaultLabel;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SetupRootDialog)
    {
        if (SetupRootDialog->objectName().isEmpty())
            SetupRootDialog->setObjectName(QString::fromUtf8("SetupRootDialog"));
        SetupRootDialog->setWindowModality(Qt::ApplicationModal);
        SetupRootDialog->resize(627, 392);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/app-icon-large"), QSize(), QIcon::Normal, QIcon::Off);
        SetupRootDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(SetupRootDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 1, 1, 1);

        bigIcon = new QLabel(SetupRootDialog);
        bigIcon->setObjectName(QString::fromUtf8("bigIcon"));
        bigIcon->setMinimumSize(QSize(128, 0));

        gridLayout->addWidget(bigIcon, 0, 0, 2, 1);

        buttonBox = new QDialogButtonBox(SetupRootDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        gridLayout->addWidget(buttonBox, 8, 1, 1, 2);

        versionLabel = new QLabel(SetupRootDialog);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));

        gridLayout->addWidget(versionLabel, 0, 1, 1, 2);

        useDefaultsButton = new QPushButton(SetupRootDialog);
        useDefaultsButton->setObjectName(QString::fromUtf8("useDefaultsButton"));

        gridLayout->addWidget(useDefaultsButton, 3, 2, 1, 1, Qt::AlignTop);

        downloadButton = new QPushButton(SetupRootDialog);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));

        gridLayout->addWidget(downloadButton, 6, 2, 1, 1, Qt::AlignTop);

        promptText = new QLabel(SetupRootDialog);
        promptText->setObjectName(QString::fromUtf8("promptText"));
        promptText->setMinimumSize(QSize(0, 80));
        promptText->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        promptText->setWordWrap(true);

        gridLayout->addWidget(promptText, 1, 1, 1, 2);

        browseButton = new QPushButton(SetupRootDialog);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        gridLayout->addWidget(browseButton, 2, 2, 1, 1, Qt::AlignTop);

        useDefaultLabel = new QLabel(SetupRootDialog);
        useDefaultLabel->setObjectName(QString::fromUtf8("useDefaultLabel"));
        useDefaultLabel->setWordWrap(true);

        gridLayout->addWidget(useDefaultLabel, 3, 1, 1, 1);

        label_2 = new QLabel(SetupRootDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        label_3 = new QLabel(SetupRootDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        retranslateUi(SetupRootDialog);

        browseButton->setDefault(true);


        QMetaObject::connectSlotsByName(SetupRootDialog);
    } // setupUi

    void retranslateUi(QDialog *SetupRootDialog)
    {
        SetupRootDialog->setWindowTitle(QApplication::translate("SetupRootDialog", "Setup required data files", nullptr));
        bigIcon->setText(QApplication::translate("SetupRootDialog", "TextLabel", nullptr));
        versionLabel->setText(QApplication::translate("SetupRootDialog", "FlightGear version 3.4.5", nullptr));
        useDefaultsButton->setText(QApplication::translate("SetupRootDialog", "Use built-in data files", nullptr));
        downloadButton->setText(QApplication::translate("SetupRootDialog", "Download ", nullptr));
        promptText->setText(QApplication::translate("SetupRootDialog", "Replace me", nullptr));
        browseButton->setText(QApplication::translate("SetupRootDialog", "Choose folder...", nullptr));
        useDefaultLabel->setText(QApplication::translate("SetupRootDialog", "To use the files included with this copy of FlightGear, click this button", nullptr));
        label_2->setText(QApplication::translate("SetupRootDialog", "To download a compressed archive of the files, click the 'Download' button. Once the download is complete, extract the files to a suitable location and choose the folder using the button above.", nullptr));
        label_3->setText(QApplication::translate("SetupRootDialog", "To browse to a downloaded copy of the files on your computer, click this button", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupRootDialog: public Ui_SetupRootDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPROOTDIALOG_H
