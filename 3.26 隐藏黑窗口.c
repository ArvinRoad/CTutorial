#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/**
* 隐藏黑窗口(伪装DOS窗口)：
*	不动声色的执行程序
*	隐藏在别的程序中执行
* 
* #pragem 程序预编译
* linker  链接
* "/subsystem:\"windows\"/entry:\"mainCRTStartup\"" 以Windows模式下去编译默认情况下是DOS窗口模式(DOS指令模式)编译，这句话是让它以Windows模式进行编译
* 项目属性- 链接器 - 系统 改变子系统为(窗口(/SUBSYSTEM:WINDOWS))
*/

//#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"") // 隐藏DOS窗口 运行其他程序请注释这个
void main29() {

	MessageBoxA(0, "你的电脑已被锁定", "系统提示", 0);

	//system("pause");
}