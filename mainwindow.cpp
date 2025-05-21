#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QFileDialog>
#include <QFileInfo>
#include <QDebug>
#include "imageitem.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    imageLabel = new QLabel(this);
    imageLabel->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    imageLabel->setScaledContents(true);
    ui->scrollArea->setWidget(imageLabel);
    setImagesList(readLastFile());
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::addLastFile(QString FileName){
    QFile file("Last.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
    out << FileName;
    file.close();
}

QString MainWindow::readLastFile(){
    QFile file("Last.txt");
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    QString line = in.readLine();
    file.close();
    return line;
}

void MainWindow::on_action_triggered(){
    QString fileName = QFileDialog::getOpenFileName(this, "Выбрать изображение", "", "Изображения (*.bmp  *.jpg *.png)");
    addLastFile(fileName);
    QPixmap pix(fileName);
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.width(),pix.height());
    setImagesList(fileName);
    setOrigin(fileName);
}

void MainWindow::on_action_3_triggered(){
    this->close();
}

void MainWindow::setImagesList(QString FileName){
    ui->listWidget->clear();
    QFileInfo info(FileName);
    QDir dir(info.absoluteDir());
    QStringList filtr;
    filtr << "*.jpg" << "*.png" << "*.bmp";
    QFileInfoList list = dir.entryInfoList(filtr);
    for (int i = 0;i < list.count();i++) {
        QFileInfo f = list.at(i);
        QPixmap pix(f.filePath());
        int w = pix.width();
        int h = pix.height();
        double fSize =f.size() / 1024.;
        QString Info = QString::number(w) + "x" + QString::number(h) + ", " + QString::number(round(fSize * 10) / 10) + "KB";
        QListWidgetItem *item = new QListWidgetItem(ui->listWidget);
        ImageItem *imgitem = new ImageItem;
        imgitem->setData(pix.scaledToWidth(90,Qt::SmoothTransformation),f.fileName(),Info, f.filePath());
        item->setSizeHint(imgitem->sizeHint());
        ui->listWidget->setItemWidget(item,imgitem);
    }
}

void MainWindow::setOrigin(QString path){
    origin = QImage(path);
}



void MainWindow::on_listWidget_itemDoubleClicked(QListWidgetItem *item){
    ImageItem *imgitem = qobject_cast <ImageItem *>(ui->listWidget->itemWidget(item));
    QPixmap pix(imgitem->getPath());
    imageLabel->setPixmap(pix);
    imageLabel->setFixedSize(pix.width(),pix.height());
    setOrigin(imgitem->getPath());
}


void MainWindow::on_action_4_triggered(){
    int newWidth = int(imageLabel->width()*1.25);
    int newHeight = int(imageLabel->height()*1.25);
    imageLabel->setFixedSize(newWidth,newHeight);
}

void MainWindow::on_action_5_triggered(){
    int newWidth = int(imageLabel->width()*0.75);
    int newHeight = int(imageLabel->height()*0.75);
    imageLabel->setFixedSize(newWidth,newHeight);
}

void MainWindow::on_action_6_triggered(){
   imageLabel->setFixedSize(imageLabel->pixmap(Qt::ReturnByValue).size());
}

void MainWindow::on_action_7_triggered(){
   double hFactor =  double(ui->scrollArea->width())/imageLabel->width();
   imageLabel->setFixedSize(int(imageLabel->width()*hFactor)-2, int(imageLabel->height()*hFactor)-2);
}


