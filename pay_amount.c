//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

int main(void)
{
    int numbers = 20;
    int * twenties,* tens,* fives,* ones;

    twenties = &numbers;
    tens = twenties;
    fives = twenties;
    ones = twenties;


    return 0;
}

void pay_amount(int dollars,int * twenties,int * tens,int * fives,int * ones)
{
    dollars / *twenties == 0;
}