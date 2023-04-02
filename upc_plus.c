//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;

    printf("Enter the number digits: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5);

    /*
     * 为了提取单个数字，使用带有%1d转换说明的scanf函数，其中%1d匹配只有位的整数。
     */
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n",9 - ((total - 1) % 10));

    return 0;
}