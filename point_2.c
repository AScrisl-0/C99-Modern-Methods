//
// Created by s0_0s on 2023/3/17.
//
#include <stdio.h>
#include <stdbool.h>


typedef struct abs{
    int num;
    double sorce;
}Abs;
int main(void)
{
    int i,j,* p,* q;
    p = &i;
    q = p;

    printf("%x\n",p);
    printf("%x\n",q);
//    未初始化的指针变量，默认为0
    int* point1;
    printf("%x\n",point1);

//    给指针赋值，只能是变量，其余不能
//    int * point2 = 1;
    bool is_right = 23;
    bool * point3 = &is_right;

    printf("%x\n",point3);
    printf("%d\n", * point3);
    printf("%x\n", * point3);

    Abs * point4;
    printf("%x\n",point4);

    int arr[] = {1,2,3,4,5};

        
    return 0;
}