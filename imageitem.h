#ifndef IMAGEITEM_H
#define IMAGEITEM_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QGridLayout>


class ImageItem : public QWidget{
    Q_OBJECT
public:
    explicit ImageItem(QWidget *parent = nullptr);
    void setData(QPixmap Image, QString TitleText, QString InfoText, QString Path);
    QString getPath();
private:
    QLabel *img;
    QLabel *title;
    QLabel *info;
    QString path;

signals:

};

#endif
