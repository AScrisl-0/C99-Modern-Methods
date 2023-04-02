//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

#define LEN 10
#define N 3
#define M 3

double sum_array(double a[],int n);
void store_zeros(double a[],int n);
double sum_two_dimensional_array(double b[][N],int n);
void array_zeros(double b[N][N],int n);

int main(void)
{
    double a[LEN];
    double b[N][N];
    double sum1,sum2;

    printf("Enter a series of array: ");

    for (int i = 0 ; i < LEN ; i++){
        scanf("%lf",&a[i]);
    }

    sum1 = sum_array(a, LEN);

    printf("sum_array_dim:%.2f\n", sum1);

    store_zeros(a, LEN);

    printf("Array Zeros: ");
    for (int j = 0 ; j < LEN ; j++){
        printf("% .2f",a[j]);
    }
    printf("\n");


    printf("Enter a series of array: ");

    for (int i = 0 ; i < N ; i++){
        for (int j = 0 ; j < N ; j++){
            scanf("%lf",&b[i][j]);
        }
    }

    printf("\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf(" %.2f",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    sum2 = sum_two_dimensional_array(b,N);

    printf("Array_Two Sum:%.2f\n",sum2);

    array_zeros(b,N);

    printf("\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf(" %.2f",b[i][j]);
        }
        printf("\n");
    }


    return 0;
}

double sum_array(double a[],int n)
{
    int i;
    double sum = 0;
    for (i = 0 ; i < n ; i++)
    {
        sum += a[i];
    }
    return sum;
}

void store_zeros(double a[],int n)
{
    int i;

    for (i = 0 ; i < n ; i++){
        a[i] = 0;
    }
}

void array_zeros(double b[N][N],int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            b[i][j] = 0;
        }
    }
}
double sum_two_dimensional_array(double b[][N],int n)
{
    int i,j;
    double sum = 0;

    for (i = 0 ; i < n ; i++){
        for (j = 0; j< N ; j++){
            sum += b[i][j];
        }
    }
    return sum;
}