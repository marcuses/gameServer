#include "mysql.h"
#include "stdafx.h"
#include "netpacket.h"
class LogicFactory
{
public:
	LogicFactory(connectionSocketData* pConn);
	~LogicFactory();

public:

	bool loginOperator();
	bool registerOperator();
	bool getSocre();
	bool setSocre();
	bool operatorMenu();//unsigned short uOpcode, char *packageContext);

private:
	mysql m_mysqltest;
	NETPacket netdata;
	char packageHead[1024];
	char packageContext[2048];
	connectionSocketData* m_pConn;
};
