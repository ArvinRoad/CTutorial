#include <stdio.h>
#include <stdlib.h>

void main() {

	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };

	int Max = a[0];	// 初始化 Max = 1 然后去比较如果a[i]大于Max 那将a[i]的值赋予Max
	
	for (int i = 0; i < 10; i++) {
		// 这行打断点，打开局部变量调试查看
		if (Max < a[i]) {
			Max = a[i];
		}
	}
	printf("Max(最大值)的值为：%d\n", Max);

	for (int i = 0; i < 10; i++) {
		// 这行打断点，打开局部变量调试查看
		if (Max > a[i]) {
			Max = a[i];
		}
	}
	printf("最小值为：%d\n", Max);

	int i = 0;
	while (i < 10) {
		i++;
		if (Max < a[i]) {
			Max = a[i];
		}
	}
	printf("while循环下Max的值为：%d\n", Max);

	system("pause");
}