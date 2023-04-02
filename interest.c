//
// Created by s0_0s on 2023/3/9.
//
#include <stdio.h>

#define NUM_SIZE ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void)
{
    int i,low_rate,num_years,year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d",&low_rate);
    printf("Enter number of years: ");
    scanf("%d",&num_years);

    printf("\nYears");
    for (i = 0; i < NUM_SIZE; i++){
        printf("%6d%%",low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");
//    for (i = 0 ; i < NUM_SIZE ; i++ ){
//        printf("%7.2f",value[i]);
//    }

    for (year = 1; year <= num_years ; year++ ){
        printf("%3d    ",year);
        for (i = 0 ;i < NUM_SIZE ; i++ ){
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f",value[i]);
        }
        printf("\n");
    }

    return 0;
}