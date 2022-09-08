#include "pch.h"
#include "CAutomaticSortedList.h"

void CAutomaticSortedList::Insert(CString newElement)
{
	AddTail(newElement);
}

void CAutomaticSortedList::SortList(CString newElement)
{
	bool bAddTail = true;
	POSITION PositionSorted =GetTailPosition();
	POSITION PreviousPos;
	for (PositionSorted; PositionSorted;)
	{
		PreviousPos = PositionSorted;
		CString oToCompare = GetPrev(PositionSorted);
		int iCompareRes = oToCompare.CompareNoCase(newElement);
		if (iCompareRes <= 0)
		{
			if (PositionSorted == NULL)
			{
				PositionSorted = PreviousPos;
			}
			break;
		}
		else
		{
			bAddTail = false;
		}
	}
	if (bAddTail)
	{
		AddTail(newElement);
	}
	else
	{
		InsertBefore(PositionSorted, newElement);
	}
}
