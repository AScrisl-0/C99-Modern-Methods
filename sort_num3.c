//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int num,x,y,z;

    printf("Enter a three-digit number: ");
    scanf("%d",&num);

    x = num % 10;
    y = num % 100 / 10;
    z = num / 100;

    printf("%d%d%d\n",x,y,z);

    return 0;
}