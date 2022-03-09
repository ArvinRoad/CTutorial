#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

char* pMem1();	// 函数指针
char* pMem2();
char* pMem3();

void main47(void) {
	char* p1 = NULL;	//声明两个指针变量
	char* p2 = NULL;
	char* p3 = NULL;
	p1 = pMem1();	// 接收函数指针传出的指针变量值
	p2 = pMem2();
	p3 = pMem3();

	printf("p1 = %s p1 = %p\n", p1, p1);
	printf("p2 = %s p2 = %p\n", p2, p2);
	printf("p3 = %s p3 = %p\n", p3, p3);
	system("pause");
}

char* pMem1() {
	/**
	*	两个不同的函数定义了一个相同的字符串，地址一样吗？
	*	是一样的，实际上它存储的是字符串的地址，栈区运行完毕就自动销毁了，实际上这两个函数是一样的只是函数名不一样
	*	同样的东西，为什么要创建两次呢？设计者也不是傻子。
	*	例如有一个货物放在哪里不动了，这个时候他们两个人分别去记录这个货物的位置。
	*	栈区上的变量执行完毕变量就销毁了
	*/
	char* p1 = "Hello World";	// 存储在全局区
	return p1;	// 返回一个指针变量
}

// 函数调用完毕，内存销毁
char* pMem2() {
	/**
	*	Hello Arvin 这个字符串怎么传入到这个指针的呢？指针变量在32Bit下是4字节，64Bit下是8字节。
	*	指针变量存储的只存储的是它的地址，变量实际在全局区。
	*/
	char* p2 = "Hello World";
	return p2;
}

char* pMem3() {
	// 如果货物不一样，那么他们的地址就不一样。
	char* p3 = "Hello Arvin";
	return p3;
}
