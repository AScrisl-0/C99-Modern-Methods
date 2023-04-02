//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    float income,tax;

    printf("Enter the income of box : ");
    scanf("%f",&income);

    if (income <= 750)
        tax = income * 0.01f;
    else if (income <= 2250)
        tax = 7.50f + (income - 750) * .02f;
    else if (income <= 3750)
        tax = 37.50f + (income - 2250) * .03f;
    else if (income <= 5250)
        tax = 82.50f + (income - 3750) * .04f;
    else if (income <= 7000)
        tax = 142.50f + (income - 5250) * .05f;
    else
        tax = 230.00f + (income - 7000) * .06f;

    printf("Personal Tax value: %.2f\n",tax);
    printf("Personal value: %.2f\n",income - tax);

    return 0;
}