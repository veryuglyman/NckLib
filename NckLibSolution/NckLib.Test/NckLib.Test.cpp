#include "pch.h"
#include <iostream>
#include "..\NckLib\InlineHook.h"


InlineHook inlineHook;

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

int main()
{
	//测试InlineHook
	TestInlineHook();
	system("pause");
}
