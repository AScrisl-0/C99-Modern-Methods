//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int i, n;

    printf("Enter limit on maximum square: ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i += 2)
        printf("%d\n", i * i);

    return 0;
}