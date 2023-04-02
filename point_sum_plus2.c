//
// Created by s0_0s on 2023/3/20.
//
#include <stdio.h>

int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int * p = arr;
    int sum = 0;
    for (p = arr; p < arr + 10; ++p) {
        sum += *p;
    }
    printf("%d\n",sum);
    return 0;
}