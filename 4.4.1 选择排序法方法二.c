#include <stdio.h>
#include <stdlib.h>

/**
*	10 个人当老大
*   我只和其中最厉害的打
*/

void main35() {

	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int Max = 0;

	for (int i = 0; i < 10 - 1; i++) {
		Max = i;
		for (int j = i + 1; j < 10; j++) {
			if (a[Max] < a[j]) {
				Max = j;	// 存储 j 的下标 不直接交换 只比较不交换
			}
		}
		if (Max != i) {
			int team = a[i];
			a[i] = a[Max];
			a[Max] = team;
		}

		for (int i = 0; i < 10; i++) {
			printf("%4d", a[i]);
		}
	}
	printf("------------- 最终结果 ---------------\n");
	for (int i = 0; i < 10; i++) {
		printf("%4d\n", a[i]);
	}

	system("pause");
}