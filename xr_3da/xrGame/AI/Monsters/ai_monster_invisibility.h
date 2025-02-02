#pragma once
#include "ai_monster_defs.h"

/////////////////////////////////////////////////////////////////////////////////////////////
// ���������� ����������� (��������)
///////////////////////////////////////////////////////////////////////////////////////////////

class CMonsterInvisibility {
	bool				flagVisibility;					// true - ���� �����

	// ��������� ��������
	bool				bCurVisibility;					// ������� ���������
	TTime				timeBlinkInterval;				// ����� ������ ��������
	TTime				timeStartBlinking;				// ����� ������ ��������� ��������� �������
	TTime				timeBlinking;					// ����� ��������
	TTime				timeLastBlink;					// ����� ���������� ������������ ������ ��������
	TTime				timeBlinkIntervalCurrent;		// ������� ����� ������ ��������
	bool				bBlinking;						// ������ � ��������� ��������

	// ��������� ����� ���������
	TTime				timeStartRestore;				// ����� ������ �������������� (����� ����������� ��� ������� ��������������, ����� �������� ������ ����� ������ ����� ���������)
	TTime				timeRestoreInterval;			// ����� ��������������

	TTime				timeStartInvisible;
	TTime				timeInvisibleInterval;
	TTime				timeInvisibilityMin;
	TTime				timeInvisibilityMax;

	TTime				timeCurrent;					// ������� �����

	bool				state_visible;

public:
				CMonsterInvisibility	();

		void	Load					(LPCTSTR section);
		bool	Switch					(bool bVis);	// ���������� true, ���� ������������ �������
		bool	Update					();				// ���������� ����� ��������� ���������

	IC	bool	IsCurrentVisible		() {return bCurVisibility;}
	IC	bool	IsInvisibilityReady		() {return (timeStartRestore + timeRestoreInterval < timeCurrent);}	
		TTime	GetInvisibleInterval	() {return timeInvisibleInterval;}

	// Temp 
	IC	bool	IsActiveBlinking		() {if (timeStartBlinking + timeBlinking > timeCurrent) return true; else return false;}

//		void	Set						(bool b_visibility);

private:
		
//		void	StartBlink				();
};
