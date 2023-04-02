//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&num);

    printf("In octal,your number is:%.5o\n",num);

    return 0;
}