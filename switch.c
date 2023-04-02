//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter the grade(0~4) of box:");
    scanf("%d",&grade);

    switch (grade) {
        case 4:
            printf("Excellent");
            break;
        case 3:
            printf("Good");
            break;
        case 2:
            printf("Average");
            break;
        case 1:
            printf("Poor");
            break;
        case 0:
            printf("Failing");
            break;
        default:
            printf("Tllegal grade");
            break;
    }


    return 0;
}