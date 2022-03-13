#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main67(void) {
    char ch[10]={0};
    
    // gets(ch);
    /* fgets 是gets的替换版，三个参数：内存地址、可存储最大字节数、文件流 */
    fgets(ch, 10, stdin);

    printf("%s\n",ch);

    fputs(ch, stdout);
    
    printf("\n");
    system("pause");
}