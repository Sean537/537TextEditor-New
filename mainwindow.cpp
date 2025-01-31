#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setText("Clicked!");
}


void MainWindow::on_actionAbout_triggered()
{
    //关于程序
    QMessageBox::information(this,tr("About"),tr("537 Text Editor\nVersion 3.0 Beta (Qt Edition)\nPowered by 537 Studio"));
}


void MainWindow::on_actionExit_triggered()
{
    QApplication* app;
    app->quit();//退出程序
}


void MainWindow::on_actionOpen_triggered()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("文件对话框"),
                                                          "", tr("图片文件(*png *jpg)"));
    qDebug()<< "fileNames:" << fileNames;
    QString str = fileNames.join("\n"); // 使用换行符连接元素
    QMessageBox::information(this,tr("File"),str);
}

