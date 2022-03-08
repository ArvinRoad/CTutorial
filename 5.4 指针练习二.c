#include <stdio.h>
#include <stdlib.h>

void main43() {
	int a = 10;
	int* p = NULL;
	p = &a;
	*p = 100;
	printf("a = %d\n", a);

	char* H = NULL;
	double* D = NULL;

	printf("指针p的大小为：%d\n", sizeof(p));
	printf("指针H的大小为：%d\n", sizeof(H));
	printf("指针D的大小为：%d\n", sizeof(D));

	// 总结：无论什么类型下指针变量的类型永远是： 64bit环境下是8字节 32bit环境下是4字节

	system("pause");
}