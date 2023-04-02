//
// Created by s0_0s on 2023/3/14.
// 变长数组函数的应用
#include <stdio.h>

int sum_array_dim(int n, int array[n]);
void print_array_dim(int n,int array[n]);
void scan_array_dim(int n ,int array[n]);
void store_zeros(int n ,int array[n]);

int sum_array_dim2(int m,int n,int arr[m][n]);
void print_array_dim2(int m,int n ,int arr[m][n]);
void scan_array_dim2(int m,int n,int arr[m][n]);
void array_zeros(int m,int n,int arr[m][n]);

int main(void)
{
    int m,n,a;

    printf("Please enter the number of rows and columns: ");
    scanf("%d%d",&m,&n);
    int arr[m][n];

    printf("Please enter a multidimensional array: ");
    printf("Please enter a two-dimensional array: ");
    scan_array_dim2(m,n,arr);
    printf("\n");

    int sum = sum_array_dim2(m,n,arr);

    print_array_dim2(m,n,arr);
    printf("\n");

    printf("Array_Dim_Sum : %d\n",sum);

    array_zeros(m,n,arr);

    print_array_dim2(m,n,arr);

    printf("Please enter a one-dimensional number: ");
    scanf("%d",&a);
    int array[a];

    printf("Enter a one-dimensional array: ");
    scan_array_dim(a,array);

    int sum2 = sum_array_dim(a,array);

    print_array_dim(a,array);
    printf("\n");

    printf("Array_dim_sum: %d\n",sum2);

    store_zeros(a,array);
    print_array_dim(a,array);

    return 0;
}
/*
 * =============================================
 */
int sum_array_dim2(int m,int n,int arr[m][n])
{
    int sum = 0 ;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += arr[i][j];
        }
    }

    return sum;
}

void print_array_dim2(int m,int n ,int arr[m][n])
{
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%5d",arr[i][j]);
        }
        printf("\n");
    }
}

void scan_array_dim2(int m,int n,int arr[m][n])
{
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d",&arr[i][j]);
        }
    }
}

void array_zeros(int m,int n,int arr[m][n])
{
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[i][j] = 0;
        }
    }
}
int sum_array_dim(int n, int array[n])
{
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    return sum;
}

void print_array_dim(int n,int array[n])
{
    for (int i = 0; i < n; ++i) {
        printf("%d",array[i]);
    }
}

void scan_array_dim(int n ,int array[n])
{
    for (int i = 0; i < n; ++i) {
        scanf("%d",&array[i]);
    }
}

void store_zeros(int n ,int array[n])
{
    for (int i = 0; i < n; ++i) {
        array[i] = 0;
    }
}