#include <stdio.h>
#include <stdlib.h>

/**
*	结构体定义数组-在栈区开辟
*	注意类比
*/
typedef struct ModelFace {
	char face[10];
	int EyesSize;
}ModelFace;

void main57() {
	int a[3] = { 1,2,3 };

	/* 结构体数组有两种定义方式 */
	ModelFace modelFace[3] = { "Gun",100,"Liyun",50,"Note",10 };
	ModelFace modelF[3] = { {"Fun",100},{"Miun",50},{"Mote",10} };

	for (int i = 0; i < 3; i++) {
		printf("ModeFace：%d %s %d\n", i, modelFace[i].face, modelFace[i].EyesSize);
		printf("ModeF   ：%d %s %d\n", i, modelF[i].face, modelF[i].EyesSize);
	}

	printf("\n");
	system("pause");
}