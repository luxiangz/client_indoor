//#include "database.h"

////����һ�����ݿ�����
//bool Database::createConnection()
//{
//     //�Ժ�Ϳ�����"sqlite1"�����ݿ����������
//    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "sqlite1");
//    db.setDatabaseName(".//qtDb.db");
//    if(!db.open())
//    {
//        qDebug()<<"can not set up a database";
//        return false;
//    }
//    return true;
//}
////�������ݿ��
//bool Database::createTable()
//{
//    QSqlDatabase db = QSqlDatabase::database("sqlite1");
//    QSqlQuery query(db);
//    bool success = query.exec("create table automobil(id int primary key,attribute varchar,"
//                              "type varchar,kind varchar,nation int,carnumber int,elevaltor int,"
//                              "distance int,oil int,temperature int)");//���һЩ���ݣ�����֪�������ʲô����
//    if(success)
//    {
//        qDebug()<<QObject::tr("database is set up");
//        return true;
//    }
//    else
//    {
//        qDebug()<<QObject::tr("database is not set up");
//        return false;
//    }
//}
////�����ݿ��в����¼
//bool Database::insert()
//{
//    QSqlDatabase db = QSqlDatabase::database("sqlite1");//�������ݿ�����
//    QSqlQuery query(db);
//    query.prepare("insert into automobil values(?, ?, ?, ?, ?, ?, ?, ?, ?, ?)");
//    long records=10;
//    for(int i=0;i<records;i++)
//    {
//        query.bindValue(0,i);
//        query.bindValue(1, "luxiang");
//        query.bindValue(2, "zhaodandan");
//        query.bindValue(3, "love");
//        query.bindValue(4, rand()%100);
//        query.bindValue(5, rand()%10000);
//        query.bindValue(6, rand()%300);
//        query.bindValue(7, rand()%200000);
//        query.bindValue(8, rand()%52);
//        query.bindValue(9, rand()%100);

//        bool success = query.exec();
//        if(!success)
//        {
//            QSqlError lastError = query.lastError();
//            qDebug()<<lastError.driverText()<<QString(QObject::tr("Insert Failed"));
//            return false;
//        }

//    }
//    return true;
//}
////��ѯ������Ϣ
//bool Database::queryAll()
//{
//    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //�������ݿ�����
//    QSqlQuery query(db);
//    query.exec("select * from automobil");
//    QSqlRecord rec = query.record();
//    qDebug() << QObject::tr("automobil��" ) << rec.count();

//    while(query.next())
//    {
//        for(int index = 0; index < 10; index++)
//            qDebug() << query.value(index) << " ";
//        qDebug() << "\n";
//    }
//    return true;
//}
////����IDɾ����¼
//bool Database::deleteById(int id)
//{
//    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //�������ݿ�����
//    QSqlQuery query(db);
//    query.prepare(QString("delete from automobil where id = %1").arg(id));
//    if(!query.exec())
//    {
//        qDebug() << "Delete Failed";
//        return false;
//    }
//    return true;
//}
////����ID���¼�¼
//bool Database::updateById(int id)
//{
//    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //�������ݿ�����
//    QSqlQuery query(db);
//    query.prepare(QString("update automobil set attribute=?,type=?,"
//                             "kind=?, nation=?,"
//                             "carnumber=?, elevaltor=?,"
//                             "distance=?, oil=?,"
//                             "temperature=? where id=%1").arg(id));

//     query.bindValue(0,"luxiang");
//     query.bindValue(1,"zhaodandan");
//     query.bindValue(2,"love");
//     query.bindValue(3,rand()%100);
//     query.bindValue(4,rand()%10000);
//     query.bindValue(5,rand()%300);
//     query.bindValue(6,rand()%200000);
//     query.bindValue(7,rand()%52);
//     query.bindValue(8,rand()%100);

//     bool success=query.exec();
//     if(!success)
//     {
//          QSqlError lastError = query.lastError();
//          qDebug() << lastError.driverText() << QString(QObject::tr("Update Failed"));
//     }
//    return true;
//}

////����
//bool Database::sortById()
//{
//    QSqlDatabase db = QSqlDatabase::database("sqlite1"); //�������ݿ�����
//    QSqlQuery query(db);
//    bool success=query.exec("select * from automobil order by id desc");
//    if(success)
//    {
//        qDebug() << QObject::tr("Sort Successfully");
//        return true;
//    }
//    else
//    {
//        qDebug() << QObject::tr("Sort Failed");
//        return false;
//    }
//}

