//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

long factorial(int n);

int main(void)
{
    int n;

    printf("Enter a number of factorial: ");
    scanf("%d",&n);

    long num = factorial(n);

    printf("%ld is %d factorial!\n",num,n);

    return 0;
}
/*
 * ================================
 *阶乘函数递归调用
 */
long factorial(int n)
{
    if (n <= 1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }
}