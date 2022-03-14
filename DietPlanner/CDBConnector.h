#pragma once
#include <cppconn/sqlstring.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
using namespace sql;

class CDBConnector
{
public:
	~CDBConnector();
	CDBConnector();
	CDBConnector(SQLString oUserNameString, SQLString oPasswordString, SQLString oDBNameString);
	CString ConnectToDatabase();
	CString SelectFromTable();
	void ChangeDB(SQLString oDBNameString);
	void ChangeUser(SQLString oUserNameString, SQLString oPasswordString);
	void ChangeURI(SQLString oURIString);
	static CStringA GetErrorCode(CStringA oErrorString);
private:
	bool bConnectionFlag = false;
	SQLString m_oUserString;
	SQLString m_oPasswordString;
	SQLString m_oDBNameString;
	SQLString m_oURIString;
	Driver *m_poDBDriver;
	Connection* ConnectiontoDB();
	const SQLString m_oDefaultURIString = "tcp://127.0.0.1";
	const SQLString m_oDefaultUserString = "root";
	const SQLString m_oDefaultPasswordString = "";
	const SQLString m_oDefaultDBNameString = "test";
	const CString SeparatorText = _T(";");
	
};

