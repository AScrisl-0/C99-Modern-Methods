//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

int fact (int n);

int main(void)
{
    int n,result;

    printf("Enter of a number: ");
    scanf("%d",&n);

    result = fact(n);

    printf("%d fact is %d\n",n,result);

    return 0;
}

int fact (int n)
{
    int i,result = 1;
    for (i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}