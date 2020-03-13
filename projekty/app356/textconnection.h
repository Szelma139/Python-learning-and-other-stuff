#ifndef TEXTCONNECTION_H
#define TEXTCONNECTION_H
#include <idataconnection.h>

class TextConnection:IDataConnection
{
public:
    TextConnection();
    PrizeModel CreatePrize(PrizeModel model);
};

#endif // TEXTCONNECTION_H
