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
        printf("Calm(�޷�)");
    else if (speed <= 3)
        printf("Light air(���)");
    else if (speed <= 27)
        printf("Breeze(΢��)");
    else if (speed <= 47)
        printf("Gale(���)");
    else if (speed <= 63)
        printf("Storm(����)");
    else
        printf("Hurricane(쫷�)");
    
    return 0;
}