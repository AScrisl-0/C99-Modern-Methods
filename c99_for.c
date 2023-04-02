//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int i = 99;
    for (int i = 0,j = 2; i <= 4; ++i,j++) {
        printf("%d\n",i);
        printf("%d\n",j);
    }
    printf("%d",i);

    return 0;
}