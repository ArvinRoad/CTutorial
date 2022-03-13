#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct Info {
	char Name[10];
	char Gender[10];
	double Height;
	unsigned short Age;
}Info;

void main63(void) {
	Info info = { 0,0,0,0 };	// 初始化，如果字符类型没有初始化可能就直接报错
	// 断点调试

	/* 值指向 info 的数组指针 */
	Info* pInfo = &info;

	/* 写入数据 */
	printf("请输入您的姓名：");
	scanf("%s", pInfo->Name);
	printf("您的姓名是：%s\n", pInfo->Name);

	printf("请输入你的性别：");
	scanf("%s", pInfo->Gender);
	printf("您的性别为：%s\n", pInfo->Gender);

	if ((!strcmp(pInfo->Gender,"男")) || (!strcmp(pInfo->Gender,"男生"))) { // 这个函数比较特殊，需要反转一下
		printf("请输入您的身高：");
		scanf("%lf",  &pInfo->Height);		// 注意是 LF
		printf("您的身高为：%g\n", pInfo->Height);

		printf("请输入您的年龄：");
		scanf("%u", &pInfo->Age);
		printf("你的年龄为：%u\n", pInfo->Age);
	}
	
	

	printf("\n");
	system("pause");
}