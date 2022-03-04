#include <stdio.h>
#include <stdlib.h>

void main27() {

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 5) {
                //break;  // 跳出当前循环
                goto A;
            }
            printf("%3d%3d", i, j);
        }
        printf("\n");
    }

A:system("pause");
}