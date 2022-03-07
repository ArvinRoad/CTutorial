#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void FindNum(int a[], int data);

// 当然还有更快的算法：插值算法

void main38() {

	int a[1000] = { 0 };
	for (int i = 0; i < 1000; i++) {
		a[i] = i;
		printf("i = %d\n",i);	// 打印出数值赋值的数
	}

	int data;
	printf("请输入您要查询的值：");
	scanf("%d",&data);

	FindNum(a,data);

	system("pause");
}

void FindNum(int a[], int data) {
	int head = 0;
	int foot = 1000 - 1;
	int flag = -2;	// 找到与没找到的判断值
	int ci = 0;	// 排除次数
	while (head <= foot) {
		int median = (head + foot) / 2;
		printf("head 的值：%d Foot的值：%d Median的值：%d 次数：%d\n",head,foot,median,++ci);
		if (data == a[median]) {
			printf("找到了 data的值为：%d\n", data);
			flag = 1;
			break;
		}else if (data > a[median]) {	// 值大于中间值，小于中间值的全部值被抛弃
			head = median + 1;

		}else {	// 值小于中间值，大于中间值的全部值被抛弃
			foot = median - 1;
		}
	}

	if (flag == -2) {	// 如果找不到这个值
		printf("找不到这个值\n");
	}

}
