//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int digit = 0, n;

    printf("Enter a no negative integer: ");
    scanf("%d",&n);

    do {
        n /= 10;
        digit++;
    } while (n > 0);

    printf("The number has %d digit.\n",digit);

    return 0;
}