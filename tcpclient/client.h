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
    explicit client(QWidget *parent = 0);//声明为explicit的构造函数不能在隐式转换中使用。
    ~client();//析构函数 delete 

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
    void readMessage();  //接收数据
    void displayError(QAbstractSocket::SocketError);  //显示客户端错误
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
