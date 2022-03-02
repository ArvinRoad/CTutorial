#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void main10() {

	float a = 10.1f;		// 有效位数是6-7位
	double b = 10.0;		// 默认是15-16位
	long double c = 3.1415;	//

	printf("%d,%d,%d\n", sizeof(float), sizeof(double), sizeof(long double));

	// 12.3e3 == 12.3*10^3
	// 1.2345e+002 == 1.2345*10正2次方
	// 1.2345e-002 == 1.2345*10负2次方
	system("pause");
}