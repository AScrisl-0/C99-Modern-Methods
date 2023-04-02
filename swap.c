//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

void swap(int * p,int * q);

int main(void)
{
    int i = 3,j = 4;

    printf("i:%d,j:%d\n",i,j);
    swap(&i,&j);
    printf("i:%d,j:%d\n",i,j);

    return 0;
}

void swap(int * p,int * q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}