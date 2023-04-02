//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

void decompose(double x,long int_part,double frac_part);

int main(void)
{
    int i = 1,d = 1;

    decompose(3.14,i,d);

    printf("int_part:%d,frac_part:%d",i,d);
    return 0;
}

void decompose(double x,long int_part,double frac_part)
{
    int_part = (long) x;
    frac_part = x - int_part;
}