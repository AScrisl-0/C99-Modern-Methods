//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

int main(void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10},*p,*q;
    p = &a[0];
//    q = &a[9];

    for (p = &a[0]; p <= &a[9]; p++) {
//        scanf("%d",p);
    }

    for (int i = 0; i < 10; ++i) {
        printf("  %d",a[i]);
    }
    printf("\n");

    q = p - 1;
    p -= 5;

    printf("p:%d\n",*p);
    printf("q:%d\n",*q);

    return 0;
}