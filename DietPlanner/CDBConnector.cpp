#include "pch.h"
#include "CDBConnector.h"

using namespace sql;

CDBConnector::CDBConnector()
{
	m_oUserString = m_oDefaultUserString;
	m_oPasswordString = m_oDefaultPasswordString;
	m_oDBNameString = m_oDefaultDBNameString;
	m_oURIString = m_oDefaultURIString;
}

CDBConnector::CDBConnector(SQLString oUserNameString, SQLString oPasswordString, SQLString oDBNameString)
{
	CDBConnector();
	m_oUserString = oUserNameString;
	m_oPasswordString = oPasswordString;
	m_oDBNameString = oDBNameString;
}

CStringA CDBConnector::ConnectToDatabase()
{
	CStringA oResultString;
	try
	{
		m_poDBDriver = get_driver_instance();
		Connection* oDBConnection(m_poDBDriver->connect(m_oURIString, m_oDefaultUserString, m_oPasswordString));
		oDBConnection->setSchema(m_oDBNameString);
		oResultString = "Sukces";
		bConnectionFlag = true;	
		delete oDBConnection;

	}
	catch (SQLException& e)
	{
		oResultString = e.what();
		bConnectionFlag = false;
	}

	return oResultString;

}
CString CDBConnector::SelectFromTabel()
{
	ResultSet* res;
	Statement* stm;
	Connection* oDBConnection(m_poDBDriver->connect(m_oURIString, m_oDefaultUserString, m_oPasswordString));
	m_poDBDriver = get_driver_instance();
	oDBConnection->setSchema(m_oDBNameString);
	CString oResultString;
	stm = oDBConnection->createStatement();
	try
	{
		res = stm->executeQuery("SELECT name FROM recipie_table ORDER BY id ASC");
		{
			while (res->next())
			{
				oResultString = res->getString(1).c_str();
			}
		}
		delete res;
	}
	catch (SQLException& e)
	{
		oResultString = e.what();
		bConnectionFlag = false;
	}

	
	delete stm;
	delete oDBConnection;
	return oResultString;
}

void CDBConnector::ChangeDB(SQLString oDBNameString)
{
	m_oDBNameString = oDBNameString;
}

void CDBConnector::ChangeUser(SQLString oUserNameString, SQLString oPasswordString)
{
	m_oUserString = oUserNameString;
	m_oPasswordString = oPasswordString;
}

void CDBConnector::ChangeURI(SQLString oURIString)
{

}

CStringA CDBConnector::GetErrorCode(CStringA oErrorString)
{
	return oErrorString;
}
