//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int num1,denom1,num2,denom2,result_sum,result_denom;

    printf("Enter two fraction separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&num1,&denom1,&num2,&denom2);

    result_sum = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n",result_sum,result_denom);
    printf("The quotient is %d\n",result_sum / result_denom);
    printf("The mod is %d\n",result_sum % result_denom);

    return 0;
}