//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int n,d;
    printf("Enter a number (enter 0 to stop): ");
    scanf("%d",&n);

    for ( d = 2; d < n; ++d) {
        if (n % d == 0)
            break;
    }
    if (d < n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);

    return 0;
}