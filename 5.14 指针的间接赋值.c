#include <stdio.h>
#include <stdlib.h>

/**
*	问题：怎么通过形参改变一个函数内实参的值？从外部更改函数内部的值
*	函数的参数有副本机制(重新开辟一个内存)，除了数组。
*	采用指针的方式从外部修改内部的值
*/

int num(int a);
/* 我们采用指针的方式从外部修改内部的值 */
void pnum(int *a);

void main53() {
	int a = 20;
	printf("main a = %p\n", &a);
	int b = num(a);	// 我们传入num的a的值为20 那么输出是10 还是 20：答案是：10 (创建副本)

	printf("b = %d\n", b);

	int c = 100;
	pnum(&c);
	printf("c = %d\n", c);

	printf("\n");
	system("pause");
}

int num(int a) {
	a = 10;
	printf("num  a = %p\n", &a);
	return a;
}

void pnum(int* a) {
	*a = 10;
}