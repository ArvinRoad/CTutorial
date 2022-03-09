#include <stdio.h>
#include <stdlib.h>

void main45() {
	int a = 10;
	int b[10];

	printf("sizeof(a)：%d\n", sizeof(a));			// 4字节
	printf("sizeof(int *)：%d\n", sizeof(int*));	// 32Bit下4四字节，64Bit下8字节
	printf("sizeof(b)：%d\n", sizeof(b));			// 4*10 = 40字节
	printf("sizeof(b[0])：%d\n", sizeof(b[0]));		// 4字节
	printf("sizeof(*b)：%d\n", sizeof(*b));			// 4个字节(取地址)

	system("pause");
}