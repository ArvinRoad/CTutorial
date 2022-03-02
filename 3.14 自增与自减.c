#include <stdlib.h>
#include <stdio.h>

void main17() {

    int a = 5;
    a++;    // 先运算A，然后再进行加1
    printf("%d\n",a++);

    printf("%d\n",++a);
    a--;
    printf("%d\n",a);
    printf("%d\n",--a);
    
    int A = 10;
    int b = A++;
    int c = ++b;
    b = c*3;
    c = --b;
    b = ++c;
    printf("%d\n",b);
    
    int C = (A++) + (++A) * 3 +(--A) + (A++); // 结合方向：从右到左 巨恶心的问题
    printf("%d\n",C);
    
    system("pause");
}