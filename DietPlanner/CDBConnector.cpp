#include "pch.h"
#include "CDBConnector.h"
#include "CRecipie.h"
using namespace sql;

CDBConnector::~CDBConnector()
{
	
}

CDBConnector::CDBConnector()
{
	m_poDBDriver = get_driver_instance();
	
	m_oUserString = m_oDefaultUserString;
	m_oPasswordString = m_oDefaultPasswordString;
	m_oDBNameString = m_oDefaultDBNameString;
	m_oURIString = m_oDefaultURIString;
	
}

CDBConnector::CDBConnector
(SQLString oUserNameString, SQLString oPasswordString, SQLString oDBNameString)
{
	m_poDBDriver = get_driver_instance();
	Connection* oConnection(m_poDBDriver->connect(m_oURIString, oUserNameString, oPasswordString));
	m_oURIString = m_oDefaultURIString;
	m_oUserString = oUserNameString;
	m_oPasswordString = oPasswordString;
	m_oDBNameString = oDBNameString;
	delete oConnection;
}

CString CDBConnector::ConnectToDatabase()
{
	CString oResultString;
	try
	{
		Connection* oConnection(m_poDBDriver->connect(m_oDefaultURIString, m_oUserString, m_oPasswordString));
		oConnection->setSchema(m_oDBNameString);
		oResultString = "Sukces";
		bConnectionFlag = true;
		delete oConnection;
	}
	catch (SQLException& e)
	{
		oResultString = e.what();
		bConnectionFlag = false;
	}
	
	return oResultString;

}
CString CDBConnector::SelectFromTable()
{
	
	CString oResultString;
	
	try
	{
		Connection* oConnection = ConnectiontoDB();
		Statement* oStatment(oConnection->createStatement());
		ResultSet* oResult(oStatment->executeQuery("SELECT * FROM recipie_table ORDER BY id ASC"));
		int iIndex = 1;
		{
			while (oResult->next())
			{
				oResultString += oResult->getString("name").c_str();
				oResultString += SeparatorText;
			}
		}
		delete oConnection;
		delete oResult;
		delete oStatment;
	}
	catch (SQLException& e)
	{
		oResultString = e.what();
	}
	return oResultString;
}

CString CDBConnector::InsertIntoTable(CRecipie* oRecipie)
{
	CString oResultString;
	CString oQuerryString = _T("INSERT into dietplanner.recipie_table(name , disscription, macro_protein,macro_carbs, macro_fats, prep_time) ");
	CString oQuerryValuesString; 
	oQuerryValuesString.Format(_T("VALUES ('%s', '%s', %f, %f, %f, %f)"),
					oRecipie->GetNameString(), 
					oRecipie->GetDescriptionString(),
					oRecipie->GetProteins(), 
					oRecipie->GetCarbs(),
					oRecipie->GetFats(),
					30);
	oQuerryString += oQuerryValuesString;
	CT2CA oSQLQuerryString(oQuerryString);
	try
	{
		Connection* oConnection = ConnectiontoDB();
		Statement* oStatment(oConnection->createStatement());
		oStatment->execute((SQLString)oSQLQuerryString);

	}
	catch (SQLException& e)
	{
		oResultString = e.what();
	}
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

Connection* CDBConnector::ConnectiontoDB()
{
	Connection* oConnection(m_poDBDriver->connect(m_oDefaultURIString, m_oUserString, m_oPasswordString));
	oConnection->setSchema(m_oDBNameString);
	return  oConnection;
}
