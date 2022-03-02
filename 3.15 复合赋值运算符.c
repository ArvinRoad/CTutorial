#include <stdlib.h>
#include <stdio.h>

void main18(){

    int a = 5;
    a+=10;
    printf("%d\n",a); // 结果a = 15 | a = a +10

    int A = 3;
    int B = A += A -= A * A;    // 首先A*A = 9 | 然后是 A = -6 = 3 -9 | 最后 A = A + (-6) | 所以得出为 -12 
    printf("%d\n",B);

    system("pause");
}