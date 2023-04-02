//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

//#define R 1
#define C (4.0f / 3.0f)
#define PI 3.14

int main(void)
{
    int volumne,R;

    printf("Enter R of box: ");
    scanf("%d",&R);

    volumne = C * PI * (R * R * R);

    printf("\n");
    printf("volumne:%d\n",volumne);

    return 0;
}