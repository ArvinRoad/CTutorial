#include <stdio.h>
#include <stdlib.h>

typedef struct MyStruct {
	char* Hello;
}MyStruct;

MyStruct* Test() {};

void main61(void) {

	MyStruct myStruct;
	MyStruct* pMyStruct = &myStruct;

	/**
	*	字符串是不动的常量，在内存中是以下的表现：
	*	const char* H = "Arvin"
	*	它在全局区是不可更改的，我们通过指针地址将它赋值给pMySruct，说白了就是地址的转移。
	*/
	char* H = "Arvin";
	pMyStruct->Hello = H;

	/**
	*	I是在栈区的数组。
	*	pMyStruct是在Main函数中的所以下面不会出问题。
	*	如果在外部函数中这样，需要讲值传递置堆区。
	*	栈区是先进后出的模型运行的，Main函数先进，所以当Test进入，出去时候将值传给了Main还是可以正常运行的。
	*	此处涉及主调函数、被调函数、函数调用模型有关系。
	*/
	char I[10] = { '1','2','3','4','5'};
	pMyStruct->Hello = I;

	printf("%s\n", pMyStruct->Hello);

	printf("\n");
	system("pause");
}