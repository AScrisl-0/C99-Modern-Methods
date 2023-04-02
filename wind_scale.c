//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int speed;

    printf("Enter the speed of box : ");
    scanf("%d",&speed);

    if(speed < 1)
        printf("Calm(无风)");
    else if (speed <= 3)
        printf("Light air(轻风)");
    else if (speed <= 27)
        printf("Breeze(微风)");
    else if (speed <= 47)
        printf("Gale(大风)");
    else if (speed <= 63)
        printf("Storm(暴风)");
    else
        printf("Hurricane(飓风)");
    
    return 0;
}