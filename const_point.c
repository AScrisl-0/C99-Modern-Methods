//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

int main(void)
{
    int i,j,*p,*q;
    p = &i;
    q = &j;

    printf("i:%p\n",&i);
    printf("j:%p\n",&j);
    printf("p:%p\n",p);
    printf("q:%p\n",q);
    printf("i:%x\n",&i);
    printf("j:%x\n",&j);
    printf("j:%x\n",p);

    return 0;
}

/*  常量指针
    void f(const int * p)
    {
        *p = 0;
    }
 */