//
// Created by s0_0s on 2023/3/13.
//
#include <stdio.h>

//C ����û�к�����д���ܣ�Ҫʵ����ͬ�Ĺ��ܣ����Ͳ�ͬ�ĵĺ���ʱ���������¶���һ���µĺ���
double power_double(double x, double n);

int main(void)
{
    double x,n,result;

    printf("Enter power_double of numbers: ");
    scanf("%lf^%lf",&x,&n);

    result = power_double(x, n);

    printf("%.2f ^ %.2f = %f\t\t",x,n,result);
    printf("(����2λ���)%.2f ^ %.2f = %.2f\n",x,n,result);

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