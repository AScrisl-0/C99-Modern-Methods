//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

int sum_array(int a[],int n);

int main(void)
{
    int b[] = {3,0,3,4,1};
    int total;

    total = sum_array(b,5);
    /* 使用复合字面量创建没有名字的数组,函数内部创建的复合字面量可以包含任意表达式，不限于常量 */
    int sum = sum_array((int []) {3,0,3,4,1},5);

    int total1 = sum_array((int []){2 * sum ,total + sum, total * sum},3);
    printf("sum = %d\n",total);
    printf("sum = %d\n",sum);
    printf("sum = %d\n",total1);

    return 0;
}

int sum_array(int a[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    return sum;
}