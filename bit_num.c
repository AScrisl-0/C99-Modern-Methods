//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    if (num > 0 && num < 9)
        printf("The number %d has 1 digits\n",num);
    else if (num > 10 && num < 99)
        printf("The number %d has 2 digits\n",num);
    else if (num > 100 && num < 999)
        printf("The number %d has 3 digits\n",num);
    else if (num > 1000 && num < 9999)
        printf("The number %d has 4 digits\n",num);
    else
        printf("Number Error!\n");

    return 0;
}