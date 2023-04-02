//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

void find_two_largest(int n,int a[], int *largest,
                      int *second_largest);

int main(void)
{
//    声明变长数组
    int largest,second_largest;
    int n;
    printf("Enter a one-dim num:");
    scanf("%d",&n);
    int arr[n];
//    初始化变长数组
    printf("Enter a one-dim array:");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }

    find_two_largest(n,arr,&largest,&second_largest);

    printf("largest:%d\n",largest);
    printf("second_largest:%d\n",second_largest);

    return 0;
}

void find_two_largest(int n,int a[], int *largest,
                      int *second_largest)
{
    int i;

    if (a[0] > a[1]) {
        *largest = a[0];
        *second_largest = a[1];
    } else {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (i = 2; i < n; i++)
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest)
            *second_largest = a[i];
}

