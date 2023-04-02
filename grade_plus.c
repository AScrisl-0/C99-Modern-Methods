//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numberical grade : ");
    scanf("%1d",&grade);

    switch (grade) {
        case 10:
        case 9:
            printf("Letter grade: A");break;
        case 8:
            printf("Letter grade: B");break;
        case 7:
            printf("Letter grade: C");break;
        case 6:
            printf("Letter grade: D");break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Letter grade: F");break;
        defalut:
            printf("Illegal grade\n");break;
    }

    return 0;
}