#include <QApplication>
#include <QTextCodec>   //�������֧��2-1
//#include <QtSql>        //���ݿ�

#include "client.h"
//#include "database.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
 //   QTextCodec::setCodecForTr(QTextCodec::codecForLocale());//�������֧��2-2
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

//    //������ݿ����
//    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");//������ݿ�����
//    db.setDatabaseName(":memory:");//���ݿ���������
//    if(!db.open())//�����ݿ�
//    {
//        return false;
//    }
//    QSqlQuery query;
//    query.exec("create table student(id int primary key,name varchar)");
    
//    //����һ�����ݿ����
//    Database d;
//    d.createConnection();
//    d.queryAll();



//    Widget w;
//    w.show();
    client w1;
    w1.show();

    return a.exec();
}
