//
// Created by s0_0s on 2023/3/16.
//
#include <stdio.h>

int main(void)
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
//    int arr2[] = {1,2,3,4,5,6,7,8,9,10};
//    int arr3[] = {1,2,3,4,5,6,7,8,9,10};

    int len = sizeof (arr1) /sizeof (arr1[0]);

    int x,y,z;
    x = sizeof (arr1);
    y = sizeof (arr1[0]);

    printf("%x\n",arr1);
    printf("%d\n",arr1);
    printf("%d\n",len);
    printf("%d\n",x );
    printf("%d\n",y);
//    printf("%x\n",arr2);
//    printf("%x\n",arr3);

    return 0;
}