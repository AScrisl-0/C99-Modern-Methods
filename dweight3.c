//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
    int height,width,length,volumne,weight;

    printf("Enter height of box:");
    scanf("%d",&height);
    printf("Enter width of box:");
    scanf("%d",&width);
    printf("Enter length of box:");
    scanf("%d",&length);
    volumne = length * width * height;
    weight = (volumne + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("Volumne:%d\n",volumne);
    printf("Dimensional weight:%d\n",weight);

    return 0;
}