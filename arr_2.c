//
// Created by s0_0s on 2023/3/9.
//
#include <stdio.h>

int main(void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {2,4,6,8,10,};
    int c[10] = {0};
    int arr1[] = {1, 3, 5, 7, 9};

    /* c99的指示器 */
    int arr2[] = {[4] = 101 , [8] = 23,2,7};

    /* 错误示例
     *int arr3[] = {2, 5 , 46, , , 123};
     */

    for (int i = 0; i < 10; ++i) {
        printf(" %d",a[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; ++i) {
        printf(" %d",b[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; ++i) {
        printf(" %d",c[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; ++i) {
        printf(" %d", arr1[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; ++i) {
        printf(" %d", arr2[i]);
    }
    printf("\n");

    return 0;
}