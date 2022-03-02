#include <stdio.h>
#include <stdlib.h>

void main14() {

    int a = 1;  // 4字节
    double b = 0.5; // 8字节

    printf("%f\n",a + b); // 输出为：1.500000，他们在8个字节环境下相加所有可以将int隐形转换为double。

    system("pause");
}