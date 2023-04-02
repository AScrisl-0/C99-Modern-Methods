//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int Check_digit,M;
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13;
    int First_Sum,Second_Sum;

    printf("Enter the ISBN number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9,&x10,&x11,&x12);

    First_Sum = 1 * (x1 + x3 + x5 + x7 + x9 + x11);
    Second_Sum = 3 * (x2 + x4 + x6 + x8 + x10 + x12);

    Check_digit = 10 - ((First_Sum + Second_Sum) % 10);
    M = (First_Sum + Second_Sum) % 10;
    if(M != 0)
    {
        printf("The num mod is: %d\n",M);
        printf("The ISBN Check Digit: %d\n",Check_digit);
    }else{
        printf("The num mod is: 0\n");
        printf("The ISBN Check Digit: 0\n");
    }
    return 0;
}