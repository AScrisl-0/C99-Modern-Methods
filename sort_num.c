//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int num,x,y;

    printf("Enter a two-digit number: ");
    scanf("%d",&num);

    x = num % 10;
    y = num / 10;

    printf("%d%d\n",x,y);

    return 0;
}