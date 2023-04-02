//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int n = 0,sum = 0;
    int i;
    while (n < 10){
        scanf("%d",&i);
        if (i == 0){
            continue;
        }
        sum += i;
        n++;
        printf("%d\n",sum);
        /* continue jumps to here */
    }

    return 0;
}