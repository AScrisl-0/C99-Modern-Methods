//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

int main(void)
{
    int i, *p;

    p = &i;

    scanf("%d",p);
//    scanf()函数的实际参数必须是指针，
//    scanf("%d",&i);

    printf("i:%d\n",i);
    printf("i:%x\n",&i);
    printf("i:%x\n",p);



    return 0;
}