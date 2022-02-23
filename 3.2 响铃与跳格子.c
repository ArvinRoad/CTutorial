#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

void main5() {

	int a = 0;
	printf("\t");
	while (a<10){
		printf("\a");
		printf("---");
		printf("\n");
		printf("\t");
		a++;
		Sleep(1200);
	}
	system("pause");
}