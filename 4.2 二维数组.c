#include <stdio.h>
#include <stdlib.h>

void main32() {

	// �洢��3*5 = 15��Ԫ��	3��5�� һ��5��Ԫ��
	int a[3][5] = { { 1,2,3,4,5 },{6,7,8,9,10},{11,12,13,14,15} };

	printf("%p\n", &a);
	
	printf("%d\n", sizeof(a));	// ��С�� 60 4�ֽ�*15Ԫ�� = 60�ֽ�
	printf("%d\n", sizeof(a) / sizeof(int));	// 60�ֽ� / 4�ֽ� = 15Ԫ��

	/* ��ά���鸳ֵ���� */
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("a = %d\n", a[i][j]);
		}
	}
	printf("------------------------------------------------\n");

	int b[3][5] = { 0 };
	int c[3][5] = { 0 };
	for (int i = 0; i < 15; i++) {	// ��ֵ
		b[i / 5][i % 5] = i;
	}

	for (int i = 0; i < 3; i++) {	//��ֵ
		for (int j = 0; j < 5; j++) {
			c[i][j] = i * 5 + j + 1;
		}
	}

	for (int i = 0; i < 3; i++){	//��ӡ
		for (int j = 0; j < 5; j++) {
			printf("b = %d\n", b[i][j]);
		}
	}

	printf("------------------------------------------------\n");
	for (int i = 0; i < 3; i++) {	//��ӡ
		for (int j = 0; j < 5; j++) {
			printf("c = %d\n", c[i][j]);
		}
	}

	system("pause");
}