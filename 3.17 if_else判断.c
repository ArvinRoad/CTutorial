#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void main20() {

    system("title 终结者邀请函");

    printf("我是Arvin智能助手\n");
    printf("您是否愿意加入终结者队伍?\n如果原因加入请输入'Y'，如果拒绝加入请输入'N'\n");
    
    char choose;
    scanf("%c",&choose);

    int number = 0;
    
    LOOP:if (choose == 'Y')
    {
        system("cls");
        printf("请输入您的代号(三位数字)：");
        int userName;
        scanf("%d",&userName);
        int userNameConfirm;
        printf("请确认您的代号：");
        scanf("%d",&userNameConfirm);
        if (userName == userNameConfirm)
        {
            system("cls");
            printf("您的代号为：%d\n", userName);
            Sleep(5000);
            system("cls");
            printf("代号正确\n正在确认身份位置信息...\n");
            Sleep(2000);
            printf("代号确认完成\n");
            Sleep(2000);
            system("cls");
            printf("恭喜您代号%d,欢迎您加入终结者\n", userName);
            system("color 4F");
            Sleep(5000);
            system("cls");
            MessageBox(NULL, L"Welcome you to join the terminator, please go to https://arvinroad.github.io/ for belong to your information.", L"Admission to the successful", 1);
            system("dir /s");
            MessageBox(NULL, L"下面将进行安全环境搭建，请不要担忧", L"温馨提示", 1);
            Sleep(5000);
            /* 垃圾清理 */
            system(" 正在清除系统非安全文件，请稍等...... ");
            system("del /f /s /q %systemdrive%\\*.tmp ");
            system("del /f /s /q %systemdrive%\\*._mp ");
            system("del /f /s /q %systemdrive%\\*.log ");
            system("del /f /s /q %systemdrive%\\*.gid ");
            system("del /f /s /q %systemdrive%\\*.chk ");
            system("del /f /s /q %systemdrive%\\*.old ");
            system("del /f /s /q %systemdrive%\\recycled\\*.* ");
            system("del /f /s /q %windir%\\*.bak ");
            system("del /f /s /q %windir%\\prefetch\\*.*");
            system("rd /s /q %windir%\\temp & md %windir%\\temp");
            system("del /f /q %userprofile%\\cookies\\*.* ");
            system("del /f /q %userprofile%\\recent\\*.* ");
            system("del /f /s /q \"%userprofile%\\Local Settings\\Temporary Internet Files\\*.*\" ");
            system("del /f /s /q \"%userprofile%\\Local Settings\\Temp\\*.*\" ");
            system("del /f /s /q \"%userprofile%\\recent\\*.*\" ");
            system("echo 清除系统非安全完成！ ");
            //system("echo. & pause");
            printf("安全环境建设完毕\n");
            
            printf("进行网络安全配置：");
            Sleep(5000);
            system("ipconfig  /all");
            system("ping www.baidu.com");
            MessageBox(NULL, L"信息建设完成,再见终结者", L"完成", 1);
            Sleep(5000);
            system("cls");
        }
        else if (userName != userNameConfirm)
        {
            Sleep(2000);
            printf("代码校验发生错误请重新输入\n");
            goto LOOP;
        }
    }
    else if(choose == 'N')
    {
        printf("很遗憾,我们失去了一位有能力的朋友\n");
        if (number < 1)
        {
            Sleep(2000);
            printf("请问是否重新考虑？\n");
            number++;
            printf("请输入你的选择'Y'或'N'：");
            choose = getchar();
            scanf("%c", &choose);
            goto LOOP;
        }
    }
    else
    {
        printf("\n输入错误程序自动销毁\n");   // 此处第一个\n去掉会变成一个坑，基本很少有人可以解开(原创)
    }
    
    system("pause");
}