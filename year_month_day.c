//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int year,month,day;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("You entered the data: %d%.2d%.2d\n",year,month,day);

    return 0;
}