#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main69(void) {

	FILE* pf = fopen("FILE\\World.txt", "rb");
	
	if (pf == NULL) {
		return -1;
	} else {
		/* 0代表偏移量 */
		fseek(pf, 0, SEEK_END);	// 文件指针移动到末尾
		int length = ftell(pf); // 获取当前文件指针距离开头的长度
		fclose(pf);
		printf("%d\n", length);
		pf = NULL;
		return length;
	}


	printf("\n");
	system("pause");
} 