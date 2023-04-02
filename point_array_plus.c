//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

void max_min(int n,int arr[],int* max,int* min);

int main(void)
{
//    变长数组声明
    int max,min;
    int n;
    printf("Enter a one-dim number:");
    scanf("%d",&n);
    int arr[n];
//    变长数组初始化
    printf("Enter a one-dim array: ");
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }

    max_min(n,arr,&max,&min);

    printf("Largest: %d\n",max);
    printf("Samllest: %d\n",min);

    return 0;
}

void max_min(int n,int arr[],int* max,int* min)
{
    *max = *min = arr[0];
    for (int i = 0; i < n; ++i) {
        if(*max < arr[i]){
            *max = arr[i];
        }else if(*min > arr[i]){
            *min = arr[i];
        }
    }
}