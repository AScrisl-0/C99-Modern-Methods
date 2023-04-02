//
// Created by s0_0s on 2023/3/9.
//
#include <stdio.h>

#define LEN 10

int main(void)
{
    int sum = 0,i,a[LEN],b[10];

    printf("Enter a series of number to arrary: ");

    /* 数组读取数据 */
    for (int i = 0; i < LEN ; ++i) {
        scanf("%d",&a[i]);
    }

    /* 数组元素遍历输出 */
    for (i = 0; i < LEN ; ++i){
        printf("%3d",a[i]);
    }
    printf("\n");

    /* 数组元素进行求和 */
    for (i = 0 ; i < LEN ; ++i){
        sum += a[i];
        a[i] += a[i];
    }
    printf("%d\n",sum);
    for (i = 0; i < LEN ; ++i){
        printf("%3d",a[i]);
    }
    printf("\n");

    /* 数组元素进行复制 */
    for (i = 0 ; i < LEN ; i++){
        b[i] = a[i];
    }

    /* 数组初始化为 0 */
    for ( i = 0 ; i < LEN ; ++i){
        a[i] = 0;
    }
    for (i = 0; i < LEN ; ++i){
        printf("%3d",a[i]);
    }
    printf("\n");
    for (i = 0; i < LEN ; ++i){
        b[i] = 0;
        printf("%3d",b[i]);
    }

    return 0;
}