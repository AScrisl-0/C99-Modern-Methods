//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

int power (int x,int n);

int main(void)
{
    int x,n;

    printf("Enter of two numbers: ");
    scanf("%d^%d",&x,&n);

    int num = power(x,n);

    printf("%d power %d is %d\n",x,n,num);

    return 0;
}

int power (int x,int n)
{
//    if (n == 0){
//        return 1;
//    }else{
//        return x * power(x,n - 1);
//    }
    return n == 0 ? 1 : x * power(x,n - 1);
}