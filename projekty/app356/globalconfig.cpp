#include "globalconfig.h"
#include <sqlconnector.h>
#include <textconnection.h>

GlobalConfig::GlobalConfig()
{

}

std::list<IDataConnection> GlobalConfig::Connections = {};

void GlobalConfig::InitializeConnections(bool database, bool textfile)
{
    if (database)
    {
    SqlConnector * sql = new SqlConnector();
    //Connections->push_back(sql);
    }
    else if (textfile)
    {
    TextConnection * text = new TextConnection();
    //Connections->push_back(text);
    }
}

std::list<IDataConnection> GlobalConfig::getConnections()
{
    return Connections;
}

void GlobalConfig::setConnections(const std::list<IDataConnection> &value)
{
    Connections = value;
}

