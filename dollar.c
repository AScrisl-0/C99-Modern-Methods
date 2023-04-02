//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

#define TAX_RATE 0.05

int main(void)
{
    float amount,added;

    printf("Enter an amount: ");
    scanf("%f",&amount);

    added = amount + amount * TAX_RATE;

    printf("with tax added:$%.2f\n",added);

    return 0;
}