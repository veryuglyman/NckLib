#include "pch.h"
#include <iostream>
#include "..\NckLib\InlineHook.h"
#include "..\NckLib\RemoteThreadInject.h"
#include "..\NckLib\MemoryInject.h"

InlineHook inlineHook;
RemoteThreadInject remoteThreadInject;
MemoryInject memoryInject;
//*********************************************************************************************
// FullName:	我是要被HOOK的函数
// Returns:		无
// Parameter:	PTCHAR szMessage：消息
// Author:		凉游浅笔深画眉 / NCK
//*********************************************************************************************
void TestHook(PTCHAR szMessage) 
{
	printf(szMessage);
	printf("\n\n");
}


//*********************************************************************************************
// FullName:	Hook成功后跳转执行到的函数
// Returns:		无
// Author:		凉游浅笔深画眉 / NCK
//*********************************************************************************************
void MyFunction() 
{
	PTCHAR szMessage;
	//截获被HOOK的函数的消息
	_asm 
	{
		mov eax, inlineHook.InlineRegister.ESP
		mov eax, dword ptr ds : [eax + 4]
		mov szMessage, eax
	}
	printf("拦截到的数据：%s\n\n", szMessage);
}


//*********************************************************************************************
// FullName:	测试InlineHook
// Returns:		无
// Author:		凉游浅笔深画眉 / NCK
//*********************************************************************************************
void TestInlineHook() 
{
	inlineHook.BeginHook((DWORD)TestHook, (DWORD)MyFunction);
	TestHook("看看能HOOK我的数据吗！");
}

//*********************************************************************************************
// FullName:	测试远程线程注入
// Returns:		无
// Author:		凉游浅笔深画眉 / NCK
//*********************************************************************************************
void TestRemoteThreadInject()
{
	DWORD dwProcessId;
	printf("请输入进程ID：");
	scanf("%d", &dwProcessId);
	if (remoteThreadInject.BeginRemoteThreadInject(dwProcessId, "C:\\Users\\Administrator\\Desktop\\Test.dll")) 
	{
		printf("注入成功!\n\n");
	}
	else 
	{
		printf("注入失败!\n\n");
	}
}


void TestMemoryInject() 
{
	DWORD dwProcessId;
	printf("请输入进程ID：");
	scanf("%d", &dwProcessId);
	DWORD baseAddress = memoryInject.BeginInject(dwProcessId, "C:\\Users\\Administrator\\Desktop\\aa.dll");
	if (baseAddress)
	{
		printf("注入成功! 基址：%08X\n\n", baseAddress);
	}
	else
	{
		printf("注入失败!\n\n");
	}
}
int main()
{
	//测试InlineHook
	TestInlineHook();
	//测试远程线程注入
	//TestRemoteThreadInject();
	TestMemoryInject();
	system("pause");
}
