//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a number of box : ");
    scanf("%d",&i);

    do {
        printf("T minus %d and counting\n",--i);
    }while (i > 0);

    return 0;
}