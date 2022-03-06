#include "4.0 函数.h"

/* 函数的定义 */
void add(int a,int b);

int main30() {

	int num1,num2;
	printf("请输入数值a：");
	scanf("%d", &num1);
	printf("\n请输入数值b：");
	scanf("%d", &num2);
	add(num1,num2);
	Helllo();
	system("pause");
	return 30;
}

void add(int a, int b) {
	int c = a + b;
	printf("a+b = %d\n", c);
}