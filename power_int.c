//
// Created by s0_0s on 2023/3/13.
//
#include <stdio.h>

//C 语言没有函数重写功能，要实现相同的功能，类型不同的的函数时，必须重新定义一个新的函数
int power_int(int x, int n);
double power_double(double x, double n);

int main(void)
{
    int x,n,result;

    printf("Enter power_int of numbers: ");
    scanf("%d^%d",&x,&n);

    result = power_int(x, n);

    printf("%d ^ %d = %d\n",x,n,result);

    return 0;
}

int power_int(int x, int n)
{
    int i,result = 1;

    for (i = 1 ; i <= n ; i++)
    {
        result *= x;
    }

    return result;
}

double power_double(double x, double n)
{
    int i;
    double result = 1.0;

    for (i = 1 ; i <= n ; i++)
    {
        result *= x;
    }

    return result;
}