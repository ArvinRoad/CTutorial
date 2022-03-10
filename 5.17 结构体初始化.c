#include <stdio.h>
#include <stdlib.h>

typedef struct Test {
	char face[10];
	int EyesSize;
	char* str;
}Test;

void main55(void) {
	Test test;
	// test.face = { "Hello" }; 这样的化会出错，它不是指针(不能往指针的地址里拷贝字符串)。所以我们要用到Strcpy函数
	strcpy(test.face,"Hello");
	test.str = "World";
	test.EyesSize = 15;
	for (char* p = test.str; p < test.str + 6; p++) {
		printf("%c", *p);
	}

	Test test02 = { "Hello",15,"Arvin"};
	printf("%s %d\n", test.face, test.EyesSize);
	printf("%s %d %s\n", test02.face, test02.EyesSize, test02.str);
	
	Test test01;
	/* 箭头运算符 ：用于指针来调用变量的一种方式 */
	Test* p_test = NULL;	// 这个指针指向我们的结构体
	p_test = &test01;	// 初始化一个结构体的对象
	strcpy(p_test->face, "Hello");
	p_test->EyesSize = 100;	// 指针通过箭头运算符调用结构体里的内容
	p_test->str = "World";
	printf("%s %d %s\n", p_test->face, p_test->EyesSize, p_test->str);

	/**
	*	报错：Test结构体它声明的时候是不开辟内存的，你必须初始化对象才开辟内存。
	*/

	printf("\n");
	system("pause");
}