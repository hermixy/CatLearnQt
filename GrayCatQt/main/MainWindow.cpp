﻿#include "MainWindow.h"
#include <QGraphicsDropShadowEffect>
#include <CatLog>

MainWindow::MainWindow(QWidget *parent)
    : RimlessWindowBase(parent)
{
    QString log1 = "MainWindow this size: "
            + QString::number(this->width())
            + " : "
            + QString::number(this->height())
            + " x: "
            + QString::number(this->pos().rx())
            + " y: "
            + QString::number(this->pos().ry());

    CATLOG::CatLog::__Write_Log(DEBUG_LOG_T(log1.toStdString()));


}

MainWindow::~MainWindow()
{

}
