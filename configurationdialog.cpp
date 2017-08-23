#include "configurationdialog.h"
#include "ui_configurationdialog.h"

ConfigurationDialog::ConfigurationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigurationDialog)
{
    ui->setupUi(this);
    SettingInit();
}

ConfigurationDialog::~ConfigurationDialog()
{
    delete ui;
}

void ConfigurationDialog::on_pushButton_MediaPath_clicked()
{
    ui->lineEdit_MediaPath->setText(QFileDialog::getOpenFileName(this,tr("Open Media File"),ui->lineEdit_MediaPath->text(),tr("Media (*.mp4)")););
}

void ConfigurationDialog::on_pushButton_Apply_clicked()
{
    Setting->setValue("Configuration/MediaPath",ui->lineEdit_MediaPath->text());
    Setting->setValue("Configuration/Site",ui->lineEdit_Site->text());
    emit MediaChanged();
    this->close();
}

void ConfigurationDialog::SettingInit()
{
    Setting=new QSettings("EachOne","AdPlayer");
    ui->lineEdit_MediaPath->setText(Setting->value("Configuration/MediaPath").toString());
    ui->lineEdit_Site->setText(Setting->value("Configuration/Site").toString());
}
