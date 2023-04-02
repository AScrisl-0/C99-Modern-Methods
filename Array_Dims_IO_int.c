//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

int main(void)
{
    int m,n;

    printf("Enter two of row and col: ");
    scanf("%d%d",&m,&n);

    int arr[m][n];

    printf("\n");
    printf("Enter a series of array: ");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("  %4d",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}