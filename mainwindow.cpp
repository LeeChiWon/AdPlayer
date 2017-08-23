#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    playerWidget=new PlayerWidget();
    connect(&ConfigDlg,SIGNAL(MediaChanged()),playerWidget,SLOT()
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConfiguration_triggered()
{

}

void MainWindow::on_actionExit_triggered()
{

}
