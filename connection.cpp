#include "connection.h"
#include <QSqlDatabase>

Connection* Connection::p_instance = nullptr;

Connection::Connection() {}

Connection* Connection::instance()
{
    if (p_instance == nullptr) {
        p_instance = new Connection();
    }
    return p_instance;
}

bool Connection::createConnect()
{
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    db.setDatabaseName("source_projet2A");
    db.setUserName("khammesi");
    db.setPassword("170124");

    if (db.open()) {
        test = true;
    }
    return test;
}

Connection::~Connection()
{
    QSqlDatabase db = QSqlDatabase::database();
    if (db.isOpen()) {
        db.close();
    }
}
