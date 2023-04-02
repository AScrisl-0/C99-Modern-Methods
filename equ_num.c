//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int score1,score2;

    printf("Enter the grade of box: ");
    scanf("%d,%d",&score1,&score2);

    if (score1 >= 90)
        printf("A\n");
    else if (score1 >= 80)
        printf("B\n");
    else if (score1 >= 70)
        printf("C\n");
    else if (score1 >= 60)
        printf("D\n");
    else
        printf("F\n");


    if (score2 < 60)
        printf("F\n");
    else if (score2 < 70)
        printf("D\n");
    else if (score2 < 80)
        printf("C\n");
    else if (score2 < 90)
        printf("B\n");
    else
        printf("A\n");

    return 0;
}