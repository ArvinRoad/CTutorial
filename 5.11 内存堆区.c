#include <stdio.h>
#include <stdlib.h>

/**
*	运行流程说明：
*	首先在栈区创建了指针p，现在指针p为NULL；
*	然后执行phead函数，它入栈，创建了一个指针tmp(存储堆区的地址)。在堆区创建了一个100字节大小的空间。
*	strcpy拷贝Hello到堆区。然后将tmp(堆区地址)返回给main函数中创建的p，栈区销毁phead指针函数。
*	p接收到堆区的地址，进行判断，如果不为NULL，就打印出它指针指向的地址的内容。
*	然后解除指针变量p和堆内存的绑定关系。将指针变量p置空。
*/

char* phead();

void main50(void) {
	char* p = NULL;
	p = phead();
	printf("p = %p\n", p);
	printf("p = %s\n", p);
	if (p != NULL) {	// 如果p接收到的不为NULL，就打印出它指针指向地址的内容
		printf("%s\n", p);
		// 断点
		free(p);	// 解除指针变量p和堆内存的绑定关系。
		p = NULL;	// 将指针变量p置空
	}
	// 断点
	system("pause");
}

char* phead() {
	char* tmp = (char*)malloc(100);	// 在堆上开辟了100字节的空间
	if (tmp == NULL) {	// 如果tmp为空那么就返回一个空的值。
		return NULL;
	}
	strcpy(tmp, "Hello");	// strcpy拷贝函数，我们将Hello拷贝到tmp指向的空间(我们在堆里开辟的空间)
	printf("tmp = %p\n", tmp);
	printf("tmp = %s\n", tmp);
	// 断点
	return tmp;
}