#include <stdio.h>
#include <stdlib.h>

void main41() {

	int a = 250;
	*(&a) = 38;	// 这个实际上和 a = 38 一样，但是这个是通过指针的方式来实现的。*操作(&a)变量地址的值 = 38
	printf("%d\n", a);

	int* p = NULL;	// 此处没有任何操作，只是声明和初始化一个指针变量
	p = &a;
	printf("%p\n", p);	// p 在这里存储的是a的内存地址
	*p = 200;	// p加上一个*号我们就可以修改a的值(通过内存地址修改)
	printf("%d\n", a);

	system("pause");
}