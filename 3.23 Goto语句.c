#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/**
* 需要注意的事情，在企业开发中是禁止使用Goto的因为会导致项目混乱，但Goto语句在网络安全领域大量使用，比如注入。
*/

void main26() {

	/* 一个简单的递归(从前有座庙的无限循环) */
	system("notepad");
	main();
	system("notepad");

	/* goto 实现循环 */
	int i = 0;
A:if (i < 5){
	system("notepad");
	i++;
	goto A;
}

LOOP:printf("来我们穿越时空\n");
	Sleep(5000);
	goto LOOP;

	/* goto 混乱的问题 */

	goto C;
	goto B;
A:printf("AAA\n");
B:printf("BBB\n");
C:printf("CCC\n");	// 注意：执行goto C; 到这里后不会执行goto B; 从C直接往下执行
D:printf("DDD\n");
E:printf("EEE\n");
F:printf("FFF\n");

}