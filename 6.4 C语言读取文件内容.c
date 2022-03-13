#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main68(void) {
	char ch = 0;
	FILE* fp = fopen("FILE\\World.txt", "r");
	if (fp == NULL) {
		return -1;
	}

	while (!feof(fp)) {
		ch = fgetc(fp);	// 获取，它一次只能读取一个字符
		printf("%c", ch);
	}
	
	fclose(fp);
	fp = NULL;

	printf("\n");
	system("pause");
}