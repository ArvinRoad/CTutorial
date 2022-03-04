#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void open() {
    //ShellExecuteA(0, "open", "\"C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE\"", 0, 0, 1);
    ShellExecuteA(0, "open", "notepad", 0, 0, 1);
}


/**
*   我们可以借助黑客软件来扫描窗口信息例如：Spy.exe 或 ViewWizard
*   HWND window 存储应用的窗口(Windows系统函数)
*   FindWindowA("窗口类名类名","应用的窗口标题");
* 
*   SetWindowPos Windows系统函数，用来设置窗口的大小和位置信息
*   400 300 是设置窗口的位置 200 200 是设置窗口的大小
*   
*/
void show() {
    HWND window = FindWindowA("Notepad", "无标题 - 记事本");
    if (window == NULL) {
        printf("应用窗口破获失败\n");
    }
    SetWindowPos(window, NULL, 400, 300, 200, 200, 0);

    /* 窗口闪现 */
    int i = 0;
LOOP:while (i < 500) {
        SetWindowPos(window, NULL, 400, 300, i, i, 0);
        Sleep(1000);
        i += 50;
    }
    while (i > 500) {
        SetWindowPos(window, NULL, 400, 300, i, i, 0);
        Sleep(1000);
        i -= 50;
    }
    int j = 0;
    if (i < 500 && j < 3) {
        ++j;
        goto LOOP;
    }
}

/* 关闭应用 */
void close() {
    system("taskkill /f /im Notepad.exe");
}

void main28() {
    open();
    Sleep(5000);    // 调试延迟，使用可以去掉
    show();
    Sleep(5000);
    close();
    system("pause");
}