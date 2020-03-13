#ifndef GLOBALCONFIG_H
#define GLOBALCONFIG_H
#include <list>
#include <idataconnection.h>

class GlobalConfig
{
public:
    GlobalConfig();

   static std::list<IDataConnection> getConnections();
   static void setConnections(const std::list<IDataConnection> &value);
   static void InitializeConnections(bool database, bool textfile);
   static std::list<IDataConnection> Connections;

};

#endif // GLOBALCONFIG_H
