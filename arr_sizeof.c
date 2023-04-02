//
// Created by s0_0s on 2023/3/9.
//
#include <stdio.h>

#define LEN 10
#define SIZE ((int) (sizeof (a) / sizeof (a[0])))

int main(void)
{
    int a[LEN],i;

    for (i = 0 ; i < LEN ; ++i){
        scanf("%d",&a[i]);
    }

    for (i = 0 ; i < sizeof(a) / sizeof(a[0]) ; ++i){
        printf(" %d",a[i]);
        a[i] = 0;
    }

    printf("\n");
    for (i = 0 ; i < sizeof(a) / sizeof(a[0]) ; ++i){
        printf(" %d",a[i]);
    }
    printf("\n");

    printf("%d\n",sizeof (a));
    for (int i = 0; i < LEN; ++i) {
        printf(" %d",sizeof(a[i]));
    }

    printf("\n");
    printf("%d",(int) (sizeof (a) / sizeof (a[0])));

    return 0;
}