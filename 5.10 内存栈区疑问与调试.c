#include <stdio.h>
#include <stdlib.h>

/**
*	两个函数声明同一个变量，这两个变量有关系吗？ ：没有
*/

char* p_str2();

void main49(void) {

	char* p = NULL;
	p = p_str2();

	printf("p = %s\n", p);
	printf("p = %p\n", p);

	// 在这里再打一个断点运行查看内存
	printf("\n");
	system("pause");
}

char* p_str2() {
	char str[100] = "Hello";
	printf("str = %s\n", str);
	printf("str = %p\n", str);
	// 查看栈销毁，在这里打一个断点
	return str;
}