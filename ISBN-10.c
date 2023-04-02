//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int Check_Digit,First_Sum,N;
    int x1,x2,x3,x4,x5,x6,x7,x8,x9;

    printf("Enter the number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d",&x1,&x2,&x3,&x4,&x5,&x6,&x7,&x8,&x9);

    First_Sum = x1 * 10 + x2 * 9 + x3 * 8 + x4 * 7 + x5 * 6 + x6 * 5 + x7 * 4 + x8 * 3 + x9 * 2;

    N = 11 - (First_Sum % 11);
    Check_Digit = N;

    if(N <= 9 && N >= 0)
    {
        printf("The ISBN Check Digit : %d\n",Check_Digit);
    }else{
        if(N = 10)
        {
            printf("The ISBN Check Digit : X\n");
        }else{
            if(N = 11)
            {
                printf("The ISBN Check Digit : 0\n");
            }
        }
    }

    return 0;
}