#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void main9() {

	int a = 10;		// 十进制
	int b = 010;	// 八进制
	int c = 0x10;	// 十六进制

	/* 下面类型都可以采用：十进制、八进制、十六进制表现 */
	int e = 10u;	// 无符号整数
	int f = 10l;	// 长整形
	int g = 10ll;	// 长长整形

	int A = 1;
	short int B = 2;
	long int C = 3;
	printf("%d,%d,%d\n", sizeof(int), sizeof(short int), sizeof(long int));

	short int AMax = SHRT_MAX;
	short int AMin = SHRT_MIN;
	int BMax = INT_MAX;
	int BMin = INT_MIN;
	long int CMax = LONG_MAX;
	long int CMin = LONG_MIN;
	printf("ShortInt的取值范围：%d,%d\n", AMax, AMin);
	printf("Int的取值范围：%d,%d\n", BMax, BMin);
	printf("LongInt的取值范围：%d,%d\n", CMax, CMin);

	unsigned short int AUMax = USHRT_MAX;
	printf("无符号ShortInt的取值范围：%d\n", AUMax);

	system("pause");
}