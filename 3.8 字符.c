#include <stdio.h>
#include <stdlib.h>

void main11() {

	char a = 'a';	// 窄字符
	printf("%d,%d\n",sizeof(a),sizeof('a'));  // a 是变量(1)，'a'是字符常量(4)。

	printf("%d\n", sizeof(""));				// 双引号 字符串"\0" 字符串至少有一个字节也就是"\0" 字符串常量

	wchar_t b = '和';	//宽字符 可以存储汉字
	printf("%d\n",sizeof("和"));		// 一个汉字是两个字节，加上"\0"一共三个字节
	printf("%d\n", sizeof(b));

	/* 小游戏 */
	system("color 5F");
	system("title 紫霞控制台");
	system("pause");
}