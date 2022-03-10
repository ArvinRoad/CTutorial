#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

char* p_str();

void main48() {

	char* p = NULL;
	p = p_str();

	printf("P = %s\n", p);	// 数组的首地址 

	/**
	*  那么p打印这个地址所队友的内存空间内容是不是 Hello 答案是否因为已经被栈销毁了
	*  说明：p_str在栈区创建一块100字节的空间，"Hello" 还是存放在全局区。
	*  p_str是一个数组，复制了全局变量的内容，拷贝了一份在栈上和地址无关。
	*  当p_str函数执行完毕后，将p_str的地址返回给Main的p，然后p_str会自动销毁。所以无法输出获取 Hello。
	*/
	printf("\n");
	system("pause");
}

char* p_str() {
	char str[100] = "Hello";	// 4字节
	printf("str = %s\n", str);
	return str;
}