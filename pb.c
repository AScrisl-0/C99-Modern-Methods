//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

void pb(int n);

int main(void)
{
    int n =3;
    pb(n);

    return 0;
}

void pb(int n)
{
    if (n != 0){
        pb(n / 2);
        putchar('0' + n % 2);
    }
}