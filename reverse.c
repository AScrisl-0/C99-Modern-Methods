//
// Created by s0_0s on 2023/3/9.
//
#include <stdio.h>

#define LEN 10

int main(void)
{
    int arr[LEN],i;

    printf("Enter 10 numbers: ");
    for ( i = 0; i < LEN; ++i) {
        scanf("%d",&arr[i]);
    }

    printf("In reverse order: ");
    for ( i = LEN - 1 ; i >= 0; i--){
        printf(" %d",arr[i]);
    }
    printf("\n");

    return 0;
}