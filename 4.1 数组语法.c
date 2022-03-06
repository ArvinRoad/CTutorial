#include <stdio.h>
#include <stdlib.h>
#define N 5	// 只需要修改常量就可以修改数组和循环函数的值

void main31() {

	int a[N] = {1,2,3,4,5};

	for (int i = 0; i < N; i++) {
		printf("%d\n", a[i]);
	}

	printf("%p\n", &a);	// %p用来输出指针类型自身的值
	
	printf("%d\n", sizeof(a)); // 查看a数组大小 1int = 4 4*5 = 20字节
	printf("%d\n", sizeof(a) / sizeof(int));	// 查看数组元素的个数

	/* 循环打印数组地址 */
	for (int i = 0; i < N; i++) {
		printf("a[%d] = %d &a[%d] = %x\n", i, a[i], i, &a[i]);	//X 打印地址 P也打印地址
	}
	/*  数组 = 值 数组 = 地址
		a[0] = 1 &a[0] = bc36f638
		a[1] = 2 &a[1] = bc36f63c
		a[2] = 3 &a[2] = bc36f640
		a[3] = 4 &a[3] = bc36f644
		a[4] = 5 &a[4] = bc36f648
	*/
	
	system("pause");
}