//
// Created by s0_0s on 2023/3/13.
//
#include <stdio.h>

//C 语言没有函数重写功能，要实现相同的功能，类型不同的的函数时，必须重新定义一个新的函数
double power_double(double x, double n);

int main(void)
{
    double x,n,result;

    printf("Enter power_double of numbers: ");
    scanf("%lf^%lf",&x,&n);

    result = power_double(x, n);

    printf("%.2f ^ %.2f = %f\t\t",x,n,result);
    printf("(保留2位结果)%.2f ^ %.2f = %.2f\n",x,n,result);

    return 0;
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