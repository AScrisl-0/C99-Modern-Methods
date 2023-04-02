//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int hour,minute,empty;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hour,&minute);
    if (hour == 0)
        printf("Equivalent 12-hour time: %d:%.2d AM\n",12,minute);
    else if (hour > 0 && hour <= 12) {
        printf("Equivalent 12-hour time: %d:%.2d AM\n",hour,minute);
    }
    else if (hour >= 13 && hour <= 24) {
        hour = hour - 12;
        printf("Equivalent 12-hour time: %d:%.2d PM\n", hour, minute);
    }

    return 0;
}