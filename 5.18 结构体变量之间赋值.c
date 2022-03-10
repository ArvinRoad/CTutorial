#include <stdio.h>
#include <stdlib.h>

/**
*	我们定义结构体的时候不开辟内存。
*	在声明变量的时候才会开辟内存 ModelFace modelFace = { "Hello",50 };
*	注意：赋值完成后它们就没有关系了
*/

typedef struct ModelFace {
	char face[10];
	int EyesSize;
}ModelFace;

void main56(void) {
	ModelFace modelFace = { "Hello",50 };

	/* 结构体变量之间可以相互赋值 */
	ModelFace modeF = modelFace;

	printf("%s %d\n", modeF.face, modeF.EyesSize);

	printf("\n");
	system("pause");
}

