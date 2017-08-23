#ifndef CONFIGURATIONDIALOG_H
#define CONFIGURATIONDIALOG_H

#include <QDialog>
#include <QtWidgets>

namespace Ui {
class ConfigurationDialog;
}

class ConfigurationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigurationDialog(QWidget *parent = 0);
    ~ConfigurationDialog();

signals:
    void MediaChanged();

private slots:
    void on_pushButton_MediaPath_clicked();
    void on_pushButton_Apply_clicked();


private:
    Ui::ConfigurationDialog *ui;
    QSettings *Setting;

    void SettingInit();
};

#endif // CONFIGURATIONDIALOG_H
