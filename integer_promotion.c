//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    float f = 3.14,frac_part;

    frac_part = f - (int) f;

    printf("frac_part=%.2f\n",frac_part);

    return 0;
}