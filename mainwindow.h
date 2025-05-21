#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QListWidgetItem>
#include <QImage>
#include <QColor>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_triggered();

    void on_action_3_triggered();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);


    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_7_triggered();

private:
    Ui::MainWindow *ui;
    QLabel * imageLabel;
    void setImagesList(QString FileName);
    QImage origin;
    QImage view;
    void setOrigin(QString path);
    void addLastFile(QString FileName);
    QString readLastFile();

};

#endif // MAINWINDOW_H
