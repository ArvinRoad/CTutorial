#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
*	INT_MAX | INT_MIN 包含在头文件<limits.h>(极限)中
*/

void main8() {
	int num_max = INT_MAX;
	int num_min = INT_MIN;

	unsigned char ch = 255;

	printf("ch的数值是：%d\n", ch);
	printf("%d,%d\n", num_max, num_min);

	system("pause");
}