#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <qsshsocket.h>
#include <QGridLayout>
#include <iostream>
//#include <form.h>
#include <QDesktopServices>
#include <QSettings>
#include <iostream>
#include <mywidget.h>
#include <QScrollArea>
#include <QScrollBar>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //socket = new QSshSocket(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


int MainWindow::getNumberOfFiles()
{
    return list.size();
}

QList<QString> MainWindow::getListOfFiles()
{

}

QString MainWindow::getElementAtIndex(int i)
{
    qDebug() << list.at(i);
    return list.at(i);
}


void MainWindow::readFile()
{

    list=listOfFiles;
    for (int i=0; i<list.size();i++)
    {
        ui->log->addItem("Nastapi proba pobrania pliku o nazwie " + list.at(i) + ".ini");

    }
    //qDebug() << list;
}
void MainWindow::on_downloadpushButton_clicked()
{
    QDir d;
    readFile();
    if (!QDir("/DownloadedFiles").exists())
    {
        ui->log->addItem("Folder docelowy nie istnieje. Proba stworzenia");
        QDir().mkdir("DownloadedFiles");

    }

    if (getNumberOfFiles() <=0) return;
    for (int i = 0; i<getNumberOfFiles();i++)
    {



             ip = ui->iplineEdit->text();
             port = ui->portlineEdit->text();
            s = new QSshSocket(this);

            s->connectToHost(ip, port.toInt());
            //while(!(s->getSessionOpen()))
            //s->login("root","RGPlus123#");



            s->login("radek","radek2");
            //SRG rg

            //while(!s & (!s->returnLoggedIn() || (!s->getSessionOpen())))
            //  return;
            ui->log->addItem("Poprawne logowanie");


            //else
            // return;

            QDir dir;
            QString absoluteLocalPath = dir.absolutePath() + "/DownloadedFiles/";
            //QString filename = getElementAtIndex(i);// + ".ini";
            QString filename = getElementAtIndex(i);// + ".ini";
            QString remotePath = "/home/radek/Remote/";
            //QString remotePath = "/opt/cfg/
            //QString remotePath = "/opt/";

            // QString targetDirectory = dir.absoluteFilePath(filename);

            s->pullFile(absoluteLocalPath + filename , remotePath + filename);

            // s->pullFile(targetDirectory + "/DownloadedFiles/" , "/home/radek/Remote/" + filename);
            // QString number=QString::number(count);
            // s->pullFile("/home/radek/Wideo/" + number + ".ini", "/home/radek/Remote/"  + number + ".ini");
            //QString download_directory = QStandardPaths.locate


            // s->pullFile(d.absolutePath() + "/DownloadedFiles/ " + getElementAtIndex(i) + ".ini", "/home/radek/Remote/" + getElementAtIndex(i) + ".ini");
            connect(s,SIGNAL(downloadProgress(qint64,qint64)),this, SLOT(downloadProgress(qint64,qint64)));
            connect(s,SIGNAL(downloadFinished(int)),this,SLOT(downloadFinished(int)));
            ui->log->addItem("Pobieranie pliku " + filename + " ze zdalnej lokalizacji" + remotePath  + filename );

            //sciezka na lokalnej maszynie z dokladna nazwa pliku
            //sciezka na maszynie z ktorej sa poberane pliki

    }


    ui->log->addItem("Pomyslnie ukonczono pobieranie plikow");
}

void MainWindow::on_commandLinkButton_clicked(){

    /// Alloc widgets on the heap
    //
    //
    //
QVector<QVector<QString>> vec;
vec.push_back(volumeDictionary);
vec.push_back(loadDictionary);

    int k = list.length();
    MyWidget * widget[k]; //number of widgets for QTab
    //f->show();
    tabWidget = new QTabWidget();
QVBoxLayout * layout = new QVBoxLayout();
//QScrollArea * scrollArea = new QScrollArea;
//scrollArea->setBackgroundRole(QPalette::Dark);

//layout->setSizeConstraint(QLayout::SetNoConstraint);

    //-----------------------------------
    ////// read tags from each file from list
     for (int p = 0; p<k; p++)
    {
    readTags(list[p]);// + ".ini");

    int t = hash.size();
    qDebug() << " Hash size " << t;

    widget[p] = new MyWidget(hash, list[p], ip, port,vec.at(p), this);
     layout->addWidget(widget[p]);
    tabWidget->addTab(widget[p],list[p]);

}
  //   setLayout(layout);
   //  setMinimumSize(200, 200);

    // Form  * f = new Form(tabWidget,this,1);
     //f->showFullScreen();
     QScrollArea * scrollArea = new QScrollArea;
     scrollArea->setWidget(tabWidget);
     scrollArea->show();
     //tabWidget->showMaximized();

}
QList<QString> MainWindow::getList() const
{
    return list;
}

void MainWindow::readTags(QString filename)
{
    ////clearing arrays
    //
    //

    Keys.clear();
    values.clear();
    hash.clear();
    //////////

    /////
    //
    // read file
    //
    QSettings settings(QDir::currentPath() + "/DownloadedFiles/" + filename, QSettings::IniFormat);
    Q_FOREACH (QString group, settings.childGroups()) {
        settings.beginGroup(group);
        const QStringList childKeys = settings.childKeys();
        foreach (const QString &childKey, childKeys)
        {

            Keys << childKey;
            values << settings.value(childKey).toString();
        }

        settings.endGroup();
    }

//------------------------------------------
    //def key value
    //  insertToVector
    //
    int n = Keys.length();
    for (int i=0; i<n; i++)
    {
        Keymap t;
        t.setKey(Keys.at(i));
        t.setValue(values.at(i));
        hash.push_back(t);
    }
    //filling vector with Keymaps
//---------------------------------------------

}


void MainWindow::setList(const QStringList &value)
{
    list = value;
}

void MainWindow::downloadProgress(qint64 recieved, qint64 total)
{
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(recieved/100);

}



void MainWindow::downloadFinished(int numOfFiles)
{
    ui->progressBar->setValue(100);
    QString labelText = "Pobieranie pliku nr -  " + QString::number(currentNumberOfFile) + " / " + QString::number(numOfFiles);
    ui->numberOfFiles->setText(labelText);
    currentNumberOfFile++;
}

void MainWindow::on_pushButton_clicked()
{
    ui->log->clear();
}

void MainWindow::on_pushButton_2_clicked()
{
    QDesktopServices s;
    //if default
    s.openUrl(QCoreApplication::applicationDirPath());


}

void MainWindow::on_actionWyj_cie_triggered()
{
 QApplication::quit();
}
