#ifndef SETWIDGETVALUE_H
#define SETWIDGETVALUE_H

#include <QMainWindow>
#include "QSerialPort"

QT_BEGIN_NAMESPACE
namespace Ui { class SetWidgetValue; }
QT_END_NAMESPACE

class SetWidgetValue : public QMainWindow
{
    Q_OBJECT

public:
    SetWidgetValue(QWidget *parent = nullptr);
    ~SetWidgetValue();

private slots:
    void on_rdoTTYUSB0_clicked();

    void on_rdoTTYMXC7_clicked();

    void on_rdoComPort_clicked();

    void on_btnConnect_clicked();

    void on_btnDisconnect_clicked();

    void on_btnSetValue_0_clicked();

    void on_btnSetValue_50_clicked();

    void on_btnSetValue_100_clicked();

    void enableControl(bool connected);

    void writeSerialPortData(QByteArray data);

    QString byteArrayToHexString(QByteArray data);

    QByteArray calculateCRC(QByteArray data);

    void on_sbValue_valueChanged(int value);

    void sendWidgetValue(int id, int value);

private:
    Ui::SetWidgetValue *ui;
    QSerialPort m_serialPort;
};
#endif // SETWIDGETVALUE_H
