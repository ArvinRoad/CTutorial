#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct MyStruct {
	char hello[10];
	int a;	//第二次加个一个int类型测试
}MyStruct;

void main60() {
	int a;
	printf("a：%d\n", sizeof(a));	// 4字节，int是系统做好的类型

	MyStruct myStruct;
	printf("myStruct：%d\n", sizeof(myStruct));	// 10字节，我们自定义变量 加上int为16字节（因为结构体内存对齐）
	strcpy(myStruct.hello, "A");
	printf("myStruct.hello：%d\n", sizeof(myStruct.hello));
	printf("myStruct.a：%d\n", sizeof(myStruct.a));	// 4字节，为什么会消失2字节？

	/**
	* 结构体在开辟内存的时候，可能因为变量不同。系统会不确定分配多少内存。
	* 所以会尽可能的分配大一点的内存，按照结构体里最大类型的2的倍数进行分配。
	*/

	MyStruct* pMyStruct = &myStruct;
	printf("*pMyStruct：%d\n", sizeof(*pMyStruct));	// 16字节 指向我们的内存：myStruct。
	printf("pMystruct：%d\n", sizeof(pMyStruct));		// 4|8字节，指针的内存是固定的
	strcpy(pMyStruct->hello, "Hello");
	pMyStruct->a = 50;
	printf("pMystruct：%s %d\n", pMyStruct->hello, pMyStruct->a);

	char name[10];
	printf("输入你要的pMyStruct的值：");
	scanf("%s", name);
	// 需要注意的是我们不能通过 char name{1，2，3};来修改，它存在于栈区，我们只能修改"字符串"
	strcpy(pMyStruct->hello, name);
	// 当然你可以char* name = Hello，然后传入进去
	printf("pMyStruct：%s %d\n", pMyStruct->hello, pMyStruct->a);

	// 如果非要传入{}可以有以下方法
	char Name[10] = { 'H','e','l','l','o' };
	// 栈区数组赋值
	for (int i = 0; i < strlen(Name); i++) {	// 如果你不知道大小可以采用strlen函数
		pMyStruct->hello[i] = Name[i];
	}
	printf("pMyStruct：%s %d\n", pMyStruct->hello, pMyStruct->a);

	// 如果我们把采用strcpy还可以采用
	char* pName = "ZhangSan";
	if (pMyStruct == NULL) {
		return NULL;
	}
	for (int i = 0; i < 9; i++) {
		pMyStruct->hello[i] = pName[i];
	}
	printf("pMyStruct：%s %d\n", pMyStruct->hello, pMyStruct->a);
	pName = "LiSi";
	for (pMyStruct = pName; pMyStruct < pName + 5; pMyStruct++) {
		printf("pMyStruct： %s\n", pMyStruct->hello);
	}

	printf("\n");
	system("pause");
}