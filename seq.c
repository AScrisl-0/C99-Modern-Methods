//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int i = 9384;

    do {
        printf("%d\n",i);
        i /= 10;
    } while (i > 0);

    return 0;
}