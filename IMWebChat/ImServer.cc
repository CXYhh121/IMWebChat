#include "ImServer.hpp"

int main()
{
    //MysqlClient *mc = new MysqlClient(); 
    //mc->ConnectMysql();
    //mc->InsertUser("wangwu","987654");
    //delete mc;
    //cout << "get a ev" << endl;
    ImServer* im = new ImServer();
    im->InitImServer();
    im->Start();
    return 0;
}
