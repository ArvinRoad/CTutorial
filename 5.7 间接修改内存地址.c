#include <stdio.h>
#include <stdlib.h>

/**
*	采用两种方式来修改变量：直接与间接(提供指针)
*/

void main46() {
	int a = 10;	// 变量名可以看作内存地址的别名
	a = 1;		// 直接修改
	printf("a = %d\n", a);

	int* p = &a;	// 变量地址相当于身份证号，拿取 a 的内存地址
	printf("p = %p &a = %p\n", p, &a);

	*p = 100;	// 间接 提供内存地址间接修改变量
	printf("a = %d\n", a);

	printf("\n");
	system("pause");
}