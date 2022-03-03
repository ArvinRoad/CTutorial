#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/**
 * #define _CRT_SECURE_NO_WARNINGS 是解决scanf报错问题，因为它是之间对地址值的修改，为了安全起见编译器会进行审查
 */

int main19() {

    int I = 520;
    int Y = 1314;
    while (I < Y) {
        printf("I Love You\n");
        Y-=1000;
    }
    printf("%d,%d\n",I,Y);

    printf("请输入你心里的数值：");
    scanf("%d", &I);    // 或采用 scanf_s("%d",I);
    printf("%d\n",I);
    if (I == 1314 && I > Y) {
     printf("祝有情人白头到老\n");   
    }
    else if (I == 520 || I > Y) {
        printf("爱情是两个人努力的结果\n");
    }else {
        printf("缘分还是不够呀~\n");
    }
    
    system("pause");
}