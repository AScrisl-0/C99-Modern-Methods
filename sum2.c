//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    long n,sum = 0;

    printf("This program sums a series of integers:\n");
    printf("Enter integersv(0 to terminate): ");
    scanf("%ld",&n);

    while(n != 0){
        sum += n;
        scanf("%ld",&n);
    }
    printf("The sum is %ld\n",sum);

    return 0;
}