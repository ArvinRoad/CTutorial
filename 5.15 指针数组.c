#include <stdio.h>
#include <stdlib.h>

void main54(void) {
	int a = 1;
	int b = 2;
	int c = 3;

	int d[4] = { 1,2,3,4 };

	for (int i = 0; i < 4; i++) {
		printf("%d\n", d[i]);
	}

	char *pa[] = { "a","b","c" };	// 指针数组 "a"在指针常量区，"a"存储的实际上是地址
	// 当然还有一种叫数组指针，实际上就是指向数组的指针
	// 注意：指针数组是指针类型的数组，数组指针是指向数组的指针
	// 断点
	for (int i = 0; i < 3; i++) {	// 这里+1是加了一个地址的长度
		printf("%s\n", pa[i]);	// 这里i也是一个地址的长度
	}
	printf("\n");
	system("pause");
}