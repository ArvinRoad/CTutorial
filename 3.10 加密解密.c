#include <stdio.h>
#include <stdlib.h>

void main13() {

    char ch = getchar();    // 存储一个用户输入的单个字符,输入A获取0
    if(ch<='F') { // 区间
        ch = ch - 17;   //转换
    }

    putchar(ch);    //输出

    char Ch[10] = {'c','a','l','c'};
    system(Ch);

    for (int i = 0; i < 4; i++){
        Ch[i] = Ch[i] - 30;
    }

    printf("%s\n",Ch);
    
    system("pause");
}