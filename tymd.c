//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int num,year,month,day;
    float price;

    printf("Enter item number: ");
    scanf("%d",&num);
    printf("Enter unit price: ");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
//    printf(" \tPrice\tDate\n");
    printf("%d\t$%.2f\t%d/%.2d/%.2d",num,price,month,day,year);

    return 0;
}