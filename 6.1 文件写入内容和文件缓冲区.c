#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main65(void) {
	FILE* pf = NULL;
	pf = fopen("FILE\\World.txt", "w+");

	if (pf == NULL) {
		return -1;
	}

	fputs("Hello World", pf);

	// 断点 去文件里看看有没有数据，这样就可以看缓冲区

	/**
	*	fputs不是把内容写入文件当中，而是写入到缓冲区。
	*	fclose 不光是关闭文件，还会把缓冲区的内容写入到文件。
	*	缓冲区的作用：
	*	缓冲区的作用实际上是用来包含我们的硬件的。
	*	所有的磁盘都是有寿命限制的，每次读写对磁盘是有伤害的。
	*	缓冲区是先集合要写的内容，然后统一写入进去
	*/

	fclose(pf);
	pf = NULL;

	printf("\n");
	system("pause");
}