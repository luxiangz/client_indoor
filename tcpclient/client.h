#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QNetworkInterface>
#include <QtNetwork>


namespace Ui {
    class client;
}

class client : public QDialog
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = 0);//����Ϊexplicit�Ĺ��캯����������ʽת����ʹ�á�
    ~client();//�������� delete 

private:
    Ui::client *ui;

    QString clientPort;
    QString serverIP;
    QString message;
    QTcpSocket *tcp;
    char flagRecord;
    char comIndex;

private slots:
    void clientSendMessage();
    void updateStatus();
    void readMessage();  //��������
    void displayError(QAbstractSocket::SocketError);  //��ʾ�ͻ��˴���
    void on_connectpushButton_clicked();
    void on_cCleanpushButton_clicked();
    void updateClientStatusConnect();
//    void updateClientStatusDisonnect();
    void on_disconnectpushButton_clicked();
    void on_clientSendpushButton_clicked();

    void on_recordpushButton_clicked();
    void on_stoprecordpushButton_clicked();
};

#endif // CLIENT_H
