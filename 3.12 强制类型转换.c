#include <stdio.h>
#include <stdlib.h>

void main15() {

    /* 第一种 */
    double a = 3.1415926;
    printf("%f\n",a);
    printf("%d\n",(int)a);  // 强制类型转换，Printf不会自动执行类型转换

    /* 第二种 (最常用) */
    double b = 3.1415926;
    int c = b;  // b 是8个字节 c 是4个字节。当你声明一个变量的时候，变量的空间就已经决定了
    printf("%f\n%d\n",b,c);

    float d = 3.1415f;
    double e = d;
    printf("%f\n%f\n",d,e);
    printf("%f\n",(float)e);

    /* char 转 int */
    char f = 'a';
    printf("%d\n",(int)f); // 把字符转换成ASCII码进行运算
    int g = 71;
    char G = g;
    printf("%d\n%c\n",sizeof(G),G); // int转char
    int h = g - 1;
    char H = h;
    printf("%c\n",H); // 我们可以通过修改ASCII的值来改变符号
    
    system("pause");
    
}