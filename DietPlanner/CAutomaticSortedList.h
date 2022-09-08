#pragma once
#include <afxtempl.h>
class CAutomaticSortedList :
    public CStringList
{

public:
    void Insert(CString newElement);
public:
    void SortList(CString newElement);
    

};

