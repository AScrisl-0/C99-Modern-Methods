//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

#define LEN 10
#define N 3
#define M 3

int sum_array(int a[],int n);
void store_zeros(int a[],int n);
int sum_two_dimensional_array(int b[][N],int n);
void array_zeros(int b[N][N],int n);

int main(void)
{
    int a[LEN];
    int b[N][N];
    int sum1,sum2;

    printf("Enter  a series of array: ");

    for (int i = 0 ; i < LEN ; i++){
        scanf("%d",&a[i]);
    }

    sum1 = sum_array(a, LEN);

    printf("sum_array_dim:%d\n", sum1);

    store_zeros(a, LEN);

    printf("Array Zeros: ");
    for (int j = 0 ; j < LEN ; j++){
        printf("% d",a[j]);
    }
    printf("\n");


    printf("Enter a series of array: ");

    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < N ; j++){
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    sum2 = sum_two_dimensional_array(b,N);

    printf("Array_Two Sum:%d\n",sum2);

    array_zeros(b,N);

    printf("\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }


    return 0;
}

int sum_array(int a[],int n)
{
    int i,sum = 0;
    for (i = 0 ; i < n ; i++)
    {
        sum += a[i];
    }
    return sum;
}

void store_zeros(int a[],int n)
{
    int i;

    for (i = 0 ; i < n ; i++){
        a[i] = 0;
    }
}

void array_zeros(int b[N][N],int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            b[i][j] = 0;
        }
    }
}
int sum_two_dimensional_array(int b[][N],int n)
{
    int i,j,sum = 0;

    for (i = 0 ; i < n ; i++){
        for (j = 0; j< N ; j++){
            sum += b[i][j];
        }
    }
    return sum;
}