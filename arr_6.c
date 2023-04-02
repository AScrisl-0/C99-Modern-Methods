/*
 * 微软的VS不支持C99的变长数组的编译，需要更换编译器，即可解决。
 */

#include <stdio.h>

int sum_two_dimensional_array(int n,int m,int a[n][m]);

int main(void)
{
    int num1,num2;

    printf("Enter two numbers of boxs: ");
    scanf("%d %d",&num1,&num2);
    int a[num1][num2];  /* 变长数组的使用,编译出现问题 */

    printf("Enter a series of array: ");
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            scanf("%d",&a[i][j]);
        }
    }

    int sum = sum_two_dimensional_array(num1,num2,a);

    printf("\n");
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("sum = %d\n",sum);

    return 0;
}

int sum_two_dimensional_array(int n,int m,int a[n][m])
{
    int i,j,sum = 0;

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            sum += a[i][j];
        }
    }

    return sum;
}