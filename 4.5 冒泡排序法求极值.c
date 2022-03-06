#include <stdio.h>
#include <stdlib.h>

/**
*	冒泡算法是两两的进行比较 9和8比较 8和7比较 如果大就相互交换
*/

void main36() {

	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };

	for (int i = 0; i < 10 - 1; i++) {

		if (a[i] > a[i + 1]) {
			int team = a[i + 1];
			a[i + 1] = a[i];
			a[i] = team;
		}
	}

	printf("a 的最大值为：%d\n",a[9]);

	system("pause");
}