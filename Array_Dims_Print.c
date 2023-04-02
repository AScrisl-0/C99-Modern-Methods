//
// Created by s0_0s on 2023/3/9.
//
#include <stdio.h>

#define LEN 3

int main(void)
{
    double ident [LEN][LEN];
    int row,col;

    printf("Enter a series of array:");
    /* 多维数组的输入 */
    for (row = 0 ; row < LEN ; row++){
        for (col = 0; col < LEN; ++col) {
            scanf("%lf",&ident[row][col]);
        }
    }

    /* 多维数组的打印 */
    for (row = 0 ; row < LEN ; row++){
        for (col = 0; col < LEN; ++col) {
            printf("%7.2f",ident[row][col]);
        }
        printf("\n");
    }
    return 0;
}