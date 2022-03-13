#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main64(void) {

	FILE* fp = NULL;	// 可以将指针变量看成一个钥匙
	fp = fopen("FILE\\Hello.txt", "w+");	// 第一个参数是"文件路径和文件名称" 第二个参数是模式 开门
	if (fp == NULL) {
		return -1;
	}

	fclose(fp);	// 关门
	fp = NULL;

	printf("\n");
	system("pause");
}