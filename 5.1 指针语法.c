#include <stdio.h>
#include <stdlib.h>

void main40() {
	int loser = 38;

	printf("%p\n", &loser);	// &取地址，返回其变量真实地址

	int* p = &loser;	// 声明一个*p，它现在就是一个指针变量，它存储的是loser的内存地址，这样是声明与赋值二合一

	*p = 3800;	// 修改地址的值为：3800。我们通过*间接的修改了loser的值

	printf("%d\n", loser);	// 现在loser的值为：3800

	/* 通常声明可以采用这样的形式，但必须要初始化 */
	int* pa = NULL;	//如果不初始化会出现问题
	pa = &loser;	// pa获取loser的内存地址
	*pa = 521;	// 然后我们可以通过*p(通过地址)去修改loser的值。通过*来间接操作内存来修改变量的值
	printf("%d\n", loser);
	
	// 总结：指针变量是一种变量，它可以存储任意类型的地址。*是用来操作地址的，&是变量的的地址

	system("pause");
}