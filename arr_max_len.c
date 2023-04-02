//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

int largest(int a[], int n);
int average(int a[], int n);
int num_positive(int a[], int n);
void scan_arr(int a[],int n);

int main(void)
{
    int n,lar,aver,num_post;

    printf("Enter a one-dimensional number : ");
    scanf("%d",&n);

    int a[n];
    printf("Enter a array number:");
    scan_arr(a,n);

    lar = largest(a,n);
    aver = average(a,n);
    num_post = num_positive(a,n);

    printf("\n");
    printf("Array Largest:%d\n",lar);
    printf("Array Average:%d\n",aver);
    printf("Array Num_positive:%d\n",num_post);

    return 0;
}

int largest(int a[], int n)
{
    int i, max = a[0];

    for (i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    return max;
}

int average(int a[], int n)
{
    int i, avg = 0;

    for (i = 0; i < n; i++)
        avg += a[i];

    return avg / n;
}

int num_positive(int a[], int n)
{
    int i, count = 0;

    for (i = 0; i < n; i++)
        if (a[i] > 0)
            count++;

    return count;
}

void scan_arr(int a[],int n)
{
    for (int i = 0; i < n; ++i) {
        scanf("%d",&a[i]);
    }
}