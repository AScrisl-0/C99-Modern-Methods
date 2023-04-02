//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

#define MONTH_RATE (rate / 1200)    /* 月利率 */

int main(void)
{
    float loan,rate,payment;
    float First_month,Second_month,Third_month;

    printf("Enter amount of loan: ");
    scanf("%f",&loan);
    printf("Enter interest rate: ");
    scanf("%f",&rate);
    printf("Enter monthly payment: ");
    scanf("%f",&payment);

    First_month = loan - payment + MONTH_RATE * loan;
    loan = First_month;
    Second_month = loan - payment + MONTH_RATE * loan;
    loan = Second_month;
    Third_month = loan - payment + MONTH_RATE * loan;

    printf("Balance remaining after first payment: $%.2f\n",First_month);
    printf("Balance remaining after second payment: $%.2f\n",Second_month);
    printf("Balance remaining after third payment: $%.2f\n",Third_month);

    return 0;
}