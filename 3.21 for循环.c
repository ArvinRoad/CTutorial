#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

void main24()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += i;
    }
    printf("Sum 的值为：%d\n",sum);

    for (int i = 0; i <= 3; i++)
    {
        // i--; 谨慎开启
        ShellExecuteA(0,"open","\"C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE\"",0,0,3);     // 打开三次World文档(干掉机器)
    }
    system("pause");
}