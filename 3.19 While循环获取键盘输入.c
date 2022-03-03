#include <stdlib.h>
#include <stdio.h>

/**
* 接收用户输入，如果用户输入的是大写那么就转换为小写
* 如果是小写就转换为大写，如果是数字就原样输出，如果是空格就输出space
*/

void judge(char data)
{
    while (1)
    {
        getchar();
        if (data == 'A' && data <= 'Z')
        {
            printf("%c\n",data+=32);
        }
        else if (data >= 97 && data <= 122)
        {
            printf("%c\n",data-=32);
        }
        else if (data >= 48 && data <= 57)
        {
            printf("%c\n",data);
        }
        else if (data == 32)
        {
            printf("This is SpaceKey\n");
        }
        else
        {
            printf("你是杠精吗？不会看题吗？\n");
        }
    }
}

void main22()
{
   char data = getchar();
    judge(data);
    system("pause");
}

