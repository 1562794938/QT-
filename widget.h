#ifndef WIDGET_H
#define WIDGET_H

#include <QSerialPort>
#include <QWidget>
#include<QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
     void enmuComPort();
     char ConvertHexChar(char ch);
        QByteArray QString2Hex(QString str);
private slots:
     void on_pushButton_clicked();
 void readDataSlot();
     void on_pushButton_2_clicked();

private:
    Ui::Widget *ui;
    QList<QString>seialList;
    QSerialPort *serialPort;
};
#endif // WIDGET_H
