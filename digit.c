//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>
int digit(int n,int k);

int main(void)
{
    int num,k;

    printf("Enter of a numbers: ");
    scanf("%d%d",&num,&k);

    int result = digit(num,k);

    printf("digit(%d,%d) = %d\n",num,k,result);

    return 0;
}

int digit(int n, int k)
{
    int i;

    for (i = 1; i < k; i++)
        n /= 10;

    return n % 10;
}