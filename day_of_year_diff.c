//
// Created by s0_0s on 2023/3/22.
//
#include <stdio.h>

int day_of_year(int month,int day,int year);

int main(void)
{
    int month1,day1,year1;
    int month2,day2,year2;
    printf("\n");

    printf("Enter start time: ");
    scanf("%d/%d/%d",&month1,&day1,&year1);
    int num1 = day_of_year(month1,day1,year1);

    printf("Enter end time: ");
    scanf("%d/%d/%d",&month2,&day2,&year2);
    int num2 = day_of_year(month2,day2,year2);

    int datediff = num2 - num1;

    printf("Start time to End time: %d\n", datediff);

    return 0;
}

int day_of_year(int month,int day,int year)
{
    int day_num[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int day_count = 0;

    for (int i = 1; i < month; ++i) {
        day_count += day_num[i-1];
    }

    if(year % 4 && month > 2 && (year % 100 != 0 || year % 400 == 0)){
        day_count++;
    }

    return day_count + day;

}
