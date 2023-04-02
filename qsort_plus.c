//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

void print_arr(int n,int arr[n]);
void scan_arr(int n ,int arr[n]);
void quicksort(int n,int arr[n],int low,int high);
int split(int n,int arr[n],int low,int high);

int main(void)
{
    int n;

    printf("Enter a one-dimensional number: ");
    scanf("%d",&n);

    int arr[n],i;

    printf("Enter %d numbers to be sorted: ",n);
    scan_arr(n,arr);

    quicksort(n,arr,0,n - 1);

    printf("In sorted order: ");
    print_arr(n,arr);

    return 0;
}

void quicksort(int n,int arr[n],int low,int high)
{
    int middle;

    if (low >= high) return;
    middle = split(n,arr,low,high);
    quicksort(n,arr,low,middle - 1);
    quicksort(n,arr,middle + 1, high);
}

int split(int n,int arr[n],int low,int high)
{
    int part_element = arr[low];

    for ( ;  ; ) {
        while(low < high && part_element <= arr[high])
            high--;
        if (low >= high) break;
        arr[low++] = arr[high];

        while(low < high && arr[low] <= part_element)
            low++;
        if (low >= high) break;
        arr[high--] = arr[low];
    }
    arr[high] = part_element;

    return high;
}

void print_arr(int n,int arr[n])
{
    for (int i = 0; i < n; ++i) {
        printf(" %d",arr[i]);
    }
    printf("\n");
}
void scan_arr(int n ,int arr[n])
{
    for (int i = 0; i < n; ++i) {
        scanf("%d",&arr[i]);
    }
}