#include <stdio.h>
#include <stdlib.h>

/**
*	冒泡排序法
*	和选择排序法不同，选择排序法是固定一个值去比较大小
*	冒泡排序法是两两进行比较
*/

void main37() {

	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };

	for (int i = 0; i < 10 - 1; i++) {
		// i每循环一次都会筛选出最大值
		for (int j = 0; j < 10 - 1 - i; j++) {		//-i 是因为一个数已经在底了，所以就不用循环它了
			if (a[j] > a[j + 1]) {
				int team = a[j + 1];
				a[j + 1] = a[j];
				a[j] = team;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%4d", a[i]);
		}
		printf("\n");
	}

	printf("\n------------- 最终结果 ---------------\n");

	for (int i = 0; i < 10; i++) {
		printf("%d\n", a[i]);
	}

	system("pause");
}