#include <stdlib.h>
#include <stdio.h>

/** 注释的作用
*  1.进行代码的解释说明
*  2.可以注释掉不需要的代码
*/

void main3() {
	system("tasklist");	// 显示当前所有进程 (行注释)

	/*
	 这是一个块注释，在这个块里面的内容都是不被程序所识别的
	*/

	/* 杀掉 360 */
	system("taskkill /f /im 360se.exe");

	getchar();
}