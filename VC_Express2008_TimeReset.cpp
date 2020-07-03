// VC_Express2008_TimeReset.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <shlwapi.h>
#include <winerror.h>
#include <windows.h>

#pragma comment(lib, "shlwapi.lib")

int _tmain(int argc, _TCHAR* argv[])
{
	LSTATUS lResult = SHDeleteKey(HKEY_CURRENT_USER, L"Software\\Microsoft\\VCExpress\\9.0\\Registration");

	printf("VC++ 2008 express registry searching... \n");
	for (int i = 0; i< 20; i++)
	{
		Sleep(20);
		printf(".");
	}
	printf("\n");

	if(lResult == ERROR_SUCCESS)
		printf("VC++ 2008 Trial Time Reset Success!! \n\n");
	else
		printf("Trial time reset failed. Registry not found!! \n\n");

	printf("  < Blog : http://dreamcast.me  Main : phinix@paran.com >  \n\n");
	

	return 0;
}

