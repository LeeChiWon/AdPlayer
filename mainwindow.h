#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include "configurationdialog.h"
#include "playerwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionConfiguration_triggered();
    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
    ConfigurationDialog ConfigDlg;
    PlayerWidget *playerWidget;
};

#endif // MAINWINDOW_H
