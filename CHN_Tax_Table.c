//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    float value,tax,empty;

    printf("Enter the value of box:");
    scanf("%f",&value);

    if (value <= 36000.00f)
        tax = value * 0.03f;
    else if (value <= 144000.00f)
        tax = value * 0.10f - 2520;
    else if (value <= 300000.00f)
        tax = value * 0.20f - 16920;
    else if (value <= 420000.00f)
        tax = value * 0.25f -31920;
    else if (value <= 660000.00f)
        tax = value * 0.30f - 52920;
    else if (value <= 960000.00f)
        tax = value * 0.35f - 85920;
    else
        tax = value * 0.45f - 181920;

    empty = value - tax;

    printf("个人应纳税：￥%.2f\n",tax);
    printf("全年税后所得额：￥%.2f\n",empty);

    return 0;
}