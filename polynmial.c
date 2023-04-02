//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

#define x5 x * x * x * x * x
#define x4 x * x * x * x
#define x3 x * x * x
#define x2 x * x
#define x1 y

int main(void)
{
    int x,y,polynmial;

    printf("Enter x of box:");
    scanf("%d,%d",&x,&y);

    polynmial = 3 * x5 + 2 * x4 - 5 * x3 - x2 + 7 * x1 - 6;

    printf("polynmial:%d\n",polynmial);

    return 0;
}