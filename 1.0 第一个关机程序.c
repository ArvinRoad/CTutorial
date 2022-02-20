#include <stdlib.h>
#include <Windows.h>

/**
* 该程序是关机程序
* Sleep 是延时函数，需要<windows.h>
* getchar(); 等待用户输入任意字符
*/

void main1() {
	system("shutdown -s -t 600");
	Sleep(10000);
	system("shutdown -a");
	getchar();
}