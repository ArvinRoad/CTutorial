#include <stdio.h>
#include <stdlib.h>

void main() {

	// a其实的地址的别名
	int a = 10;
	printf("%p\n", &a);

	// 这里断点，如何打开内存窗口编辑值再运行。实际上外挂就是通过这样来工作的

	printf("%d\n", a);

	system("pause");
}