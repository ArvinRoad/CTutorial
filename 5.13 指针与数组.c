#include <stdio.h>
#include <stdlib.h>

void main52() {
	char str[] = "Hello";

	// 字符串是以\0结尾的所以是6个字节 或者智能去判断
	/*for (int i = 0; i < sizeof(str); i++) {
		printf("%c", str[i]);
	}
	printf("\n\n");*/

	/* 我们采用指针的方式打印 */ // 这里断点调试，注释上面for内容
	for (char* p_str = str; p_str < str + 3; p_str++) {
		printf("%c", *p_str);
	}
	/**
	*	for(指针绑定地址，指针小于数组字符串，p_str++(步长))
	*	数组+1是加了本身一个元素的大小
	*	p_str+1是加了指向类型的大小
	*	指针变量和数组的起始点是一样的，步长也是一样的
	*	所以值也一样
	*/

	printf("\n");
	system("pause");
}