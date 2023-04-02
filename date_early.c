//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int month1,day1,year1,month2,day2,year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month1,&day1,&year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&month2,&day2,&year2);

    if (year1 < year2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
    else
        printf("%d/%d/%d is earlier than %d/%d/%d",month2,day2,year2,month1,day1,year1);


    if (year1 == year2){
        if (month1 < month2){
            printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
        }else {
            printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
        }
        if (month1 == month2){
            if (day1 < day2){
                printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
            }else{
                printf("%d/%d/%d is earlier than %d/%d/%d", month2, day2, year2, month1, day1, year1);
            }
            if (day1 == day2)
                printf("datetime equvial\n");
        }
    }

      return 0;
}