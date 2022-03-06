#include <stdio.h>
#include <stdlib.h>

void main32() {

	// 存储了3*5 = 15个元素	3行5列 一行5个元素
	int a[3][5] = { { 1,2,3,4,5 },{6,7,8,9,10},{11,12,13,14,15} };

	printf("%p\n", &a);
	
	printf("%d\n", sizeof(a));	// 大小是 60 4字节*15元素 = 60字节
	printf("%d\n", sizeof(a) / sizeof(int));	// 60字节 / 4字节 = 15元素

	/* 二维数组赋值方法 */
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("a = %d\n", a[i][j]);
		}
	}
	printf("------------------------------------------------\n");

	int b[3][5] = { 0 };
	int c[3][5] = { 0 };
	for (int i = 0; i < 15; i++) {	// 赋值
		b[i / 5][i % 5] = i;
	}

	for (int i = 0; i < 3; i++) {	//赋值
		for (int j = 0; j < 5; j++) {
			c[i][j] = i * 5 + j + 1;
		}
	}

	for (int i = 0; i < 3; i++){	//打印
		for (int j = 0; j < 5; j++) {
			printf("b = %d\n", b[i][j]);
		}
	}

	printf("------------------------------------------------\n");
	for (int i = 0; i < 3; i++) {	//打印
		for (int j = 0; j < 5; j++) {
			printf("c = %d\n", c[i][j]);
		}
	}

	system("pause");
}