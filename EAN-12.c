//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,i12,first_sum,second_sum,total;

    printf("Enter the number digits: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);

    /*
     * 为了提取单个数字，使用带有%1d转换说明的scanf函数，其中%1d匹配只有位的整数。
     */
    first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    second_sum = i1 + i3 + i5 + i7 + i9 + i11;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n",9 - ((total - 1) % 10));

    return 0;
}