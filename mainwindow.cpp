#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initUI()
{
        setCentralWidget(ui->fileTabWidget); // 将 QTabWidget 设置为中心控件，填充满整个窗口

        // 添加多个标签页
        for (int i = 0; i < 3; ++i)
        {
            // 创建 QPlainTextEdit 控件
            QPlainTextEdit *textEdit = new QPlainTextEdit();
            textEdit->setPlaceholderText(QString("Tab %1 - 键入文本...").arg(i + 1));

            // 将 QPlainTextEdit 控件设置为当前标签页的内容
            ui->fileTabWidget->addTab(textEdit, QString("Tab %1").arg(i + 1));
        }

        // 设置窗口的初始大小
        resize(800, 600);
/*
    QLabel *permanent=new QLabel(this);
    permanent->setFrameStyle(QFrame::Box|QFrame::Sunken);
    permanent->setText(tr("<a href=\"https://sean537.github.io\">网站链接</a>"));
    permanent->setOpenExternalLinks(true);//设置可以打开网站链接
    ui->statusBar->addPermanentWidget(permanent);//显示永久信息
*/
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
