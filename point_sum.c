//
// Created by s0_0s on 2023/3/20.
//
#include <stdio.h>

int main(void)
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int * p;
//    数组赋值三种方式之一:C99复合字面量
//    创建无名称的数组
    int *q = (int[]){1,2,3,4,5,6,7,8,9,};
    int sum = 0;
    for (p = &arr[0]; p < &arr[10]; ++p) {
        sum += *p;
    }
    printf("Sum:%d\n",sum);

    printf("%d\n",*q);
    return 0;
}