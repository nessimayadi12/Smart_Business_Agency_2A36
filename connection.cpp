#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("agency");
db.setUserName("nessimayadi");//inserer nom de l'utilisateur
db.setPassword("90266277");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
