//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

int day_of_year(int month,int day,int year);

int main(void)
{
    int month,day,year;

    printf("Enter a series of number(mm-dd-yy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    int nums = day_of_year(month,day,year);

    printf("%d day is %d year\n",nums,year);

    double ratio = (double) nums / 365;

    printf("%d year is happend %.2f%%\n",year,ratio * 100 );

    return 0;
}

int day_of_year(int month,int day,int year)
{
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int day_count = 0, i;

    for (i = 1; i < month; i++)
        day_count += num_days[i-1];

    /* adjust for leap years, assuming they are divisible by 4 */
    if (year % 4 == 0 && month > 2 && (year % 100 != 0 || year % 400 == 0))
        day_count++;

    return day_count + day;
}