#include <stdio.h>
#include <stdlib.h>

/**
*	结构体动态数组-堆区
*	注意类比
*/

struct ModelFace {
	char face[10];
	int EyesSize;
};

void main58() {

	int a[3] = { 0 };
	int* pa = (int*)malloc(3 * sizeof(int)); // 开辟堆区内存
	free(pa);
	pa = NULL;

	/* 结构体动态数组 */
	struct ModelFace modelFace[3] = { 0 };
	struct ModelFace* p_str = (struct ModelFace*)malloc(3 * sizeof(struct ModelFace));
	if (p_str == NULL) {
		return NULL;
	}
	for (int i = 0; i < 3; i++) {
		strcpy(p_str[i].face, "Arvin");
		p_str[i].EyesSize = 10 + i;
	}
	for (int i = 0; i < 3; i++) {
		printf("modelFace %d ：%s %d\n", i, p_str[i].face, p_str[i].EyesSize);
	}
	if (p_str != NULL) {
		free(p_str);
		p_str = NULL;
	}

	printf("\n");
	system("pause");
}