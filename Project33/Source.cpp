//test17_1.pro
CONFIG += c++11 \
console

//mainwindow.h
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QMainWindow>
#include<QDebug>
#include<QMouseEvent>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

    void mousePressEvent(QMouseEvent* event) {
        qDebug() << "MouseX: " << event->x();
        qDebug() << "MouseY: " << event->y();
    }

private:
    Ui::MainWindow* ui;

};

#endif // MAINWINDOW_H

//mainwindow.cpp
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    setMouseTracking(true);
}
