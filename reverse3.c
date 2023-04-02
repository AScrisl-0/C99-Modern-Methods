//
// Created by s0_0s on 2023/3/20.
//
#include <stdio.h>

#define N 10

int main(void)
{
    int arr[N],* p;

    printf("Enter %d number: ",N);
    for (p = arr; p < arr + N; ++p) {
        scanf("%d",p);
    }

    printf("In reverse order:");
    for (p = arr + N - 1; p >= arr; --p) {
        printf(" %d", *p);
    }
    printf("\n");

    return 0;
}