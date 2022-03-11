#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/**
*	结构体嵌套指针
*	如果结构体内部有个指针能否直接给指针拷贝内容：答案是可以的
*/


typedef struct ModelFace {
	char* face;
	int EyesSize;
}ModelFace;

void main59(void) {
	printf("请输入您的姓名：");
	char Mname[10] = { 0 };
	int* age = 0;
	scanf("%s",Mname);
	char* name = NULL;
	name = (char*)malloc(10);
	strcpy(name, Mname);
	printf("name：%s\n", name);
	if (name != NULL) {
		free(name);
		name = NULL;
	}
	/* 结构体 */
	ModelFace modelFace;
	modelFace.face = (char*)malloc(10);
	strcpy(modelFace.face, Mname);
	modelFace.EyesSize = 18;
	printf("ModeFace：name:%s age:%d", modelFace.face, modelFace.EyesSize);
	if (modelFace.face != NULL) {
		free(modelFace.face);
		modelFace.face = NULL;
	}
	printf("\n");
	system("pause");
}