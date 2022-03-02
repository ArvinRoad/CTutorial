#include <stdio.h>
#include <stdlib.h>

void main16() {

    int a = 10;
    int b = 5;
    int c = a+b;
    printf("%d\n",c);

    double d = a+b;
    printf("%f\n",d);

    float e = 10 / 3;
    int f = e;
    printf("%d\n%f\n",f,e);

    int h = 10 % 2;
    printf("%d\n",h);
    if (h == 0) {
        h++;
        printf("%d\n",h);
        if (h<2) {
            ++h;
            printf("%d\n",h);
        }
    }
    
    system("pause");
}