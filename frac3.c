//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

int main(void)
{
    int x,y,z,num;

    printf("Enter num(0~999) of box:");
    scanf("%d",&num);

    x = num / 100;
    num = num - x * 100;
    y = num / 10;
    num = num - y * 10;
    z = num % 10;

    printf("100 to :%d\n",x);
    printf("10 to :%d\n",y);
    printf("1 to :%d\n",z);

    return 0;
}