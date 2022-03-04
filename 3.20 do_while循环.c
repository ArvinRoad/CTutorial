#include <stdio.h>
#include <stdlib.h>

void main23()
{
    int a = 0;
    do
    {
        printf("Hello World\n");
        a++;
    }
    while (a < 5 && a > 5);
    printf("a 的值为：%d\n",a);
    
    system("pause");
}