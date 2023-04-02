//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    float commissiona,commissionb,valuea,valueb,price;
    int num;

    printf("Enter num and price of trade:");
    scanf("%d%f",&num,&price);

    valuea = num * price;

    if (valuea < 2500.00f)
        commissiona = 30.00f + .017f * valuea;
    else if (valuea < 6250.00f)
        commissiona = 56.00f + .0066f * valuea;
    else if (valuea < 20000.00f)
        commissiona =  76.00f + .0034f * valuea;
    else if (valuea < 50000.00f)
        commissiona = 100.00f + .0022f * valuea;
    else if (valuea < 500000.00f)
        commissiona = 155.00f + .0011f * valuea;
    else
        commissiona = 255.00f + .0009f * valuea;

    if (commissiona < 39.00f)
        commissiona = 39.00f;

    if (num < 2000){
        valueb = num * 33.3f;
    }else{
        valueb = num * 33.2f;
    }

    if (valueb < 2500.00f)
        commissionb = 30.00f + .017f * valueb;
    else if (valueb < 6250.00f)
        commissionb = 56.00f + .0066f * valueb;
    else if (valueb < 20000.00f)
        commissionb =  76.00f + .0034f * valueb;
    else if (valueb < 50000.00f)
        commissionb = 100.00f + .0022f * valueb;
    else if (valueb < 500000.00f)
        commissionb = 155.00f + .0011f * valueb;
    else
        commissionb = 255.00f + .0009f * valueb;

    if (commissionb < 39.00f)
        commissionb = 39.00f;

    printf("A | Commission: $%.2f\n",commissiona);
    printf("B | Commission: $%.2f\n",commissionb);

    return 0;
}

