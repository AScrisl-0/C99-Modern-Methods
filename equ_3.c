//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int i,j,num;

    printf("Enter a number of box:");
    scanf("%d &d",&i,&j);

    num = ((i > j) - (i < j));
    printf("(i > j) - (i < j) : %d\n",num);
    printf("%d\n", i >= 0 ? i : -i);
    return 0;
}

