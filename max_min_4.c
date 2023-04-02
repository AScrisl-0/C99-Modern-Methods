//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int max1,min1,max2,min2;
    int a,b,c,d;

    printf("Enter four integers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if (a > b)
        max1 = a,min1 = b;
    else
        max1 = b,min1 = a;

    if (c > d)
        max2 = c,min2 = d;
    else
        max2 = d,min2 = c;

    if (max1 > max2)
        printf("Largest: %d\n",max1);
    else
        printf("Largest: %d\n",max2);
    if (min1 < min2)
        printf("Smallest: %d\n",min1);
    else
        printf("Smallest: %d\n",min2);

    return 0;
}