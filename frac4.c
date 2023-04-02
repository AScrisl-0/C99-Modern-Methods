//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

int main(void)
{
    int a,b,c,d,num;

    printf("Enter num(0~9999) of box:");
    scanf("%d",&num);

    a = num / 1000;
    num = num - a * 1000;
    b = num / 100;
    num = num - b * 100;
    c = num / 10;
    num = num - c * 10;
    d = num % 10;

    printf("1000 to:%d\n",a);
    printf("100 to:%d\n",b);
    printf("10 to:%d\n",c);
    printf("1 to:%d\n",d);

    printf("%d,%d,%d,%d\n",a,b,c,d);

    return 0;
}