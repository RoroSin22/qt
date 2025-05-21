#include "imageitem.h"

ImageItem::ImageItem(QWidget *parent) : QWidget(parent){
    img = new QLabel(this);
    title = new QLabel(this);
    info = new QLabel(this);
    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(img,0,0);
    grid->addWidget(title,0,1);
    grid->addWidget(info,1,1);
    img->setText("pix");
    title->setText("title");
    info->setText("info");
}

void ImageItem::setData(QPixmap Image, QString TitleText, QString InfoText, QString Path){
    img->setPixmap(Image);
    img->setFixedWidth(Image.width());
    title->setText(TitleText);
    info->setText(InfoText);
    path = Path;
}

QString ImageItem::getPath(){
    return path;
}
