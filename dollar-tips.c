//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

int main(void)
{
    int bill1,bill2,bill3,bill4,amount;

    printf("Enter a dollar amount:");
    scanf("%d",&amount);

    bill1 = amount / 20;
    amount = amount - bill1 * 20;
    bill2 = amount / 10;
    amount = amount - bill2 * 10;
    bill3 = amount / 5;
    amount = amount - bill3 * 5;
    bill4 = amount / 1;

    printf("$20 bills:%d\n",bill1);
    printf("$10 bills:%d\n",bill2);
    printf("$5 bills:%d\n",bill3);
    printf("$1 bills:%d\n",bill4);

    return 0;
}