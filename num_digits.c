//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

int num_digits(int n);

int main(void)
{
    int n,result;

    printf("Enter one number: ");
    scanf("%d",&n);

    result =num_digits(n);

    printf("%d is %d numbers",n,result);

    return 0;
}

int num_digits(int n)
{
    int result = 0;
    do {
        n /= 10;
        result++;
    }while(n != 0);

    return result;
}