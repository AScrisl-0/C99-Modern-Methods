//
// Created by s0_0s on 2023/3/17.
//
#include <stdio.h>

int main(void)
{
//    基本类型指针变量
//    声明指针变量是为指针留出空间，但是并没有把它指向对象
    int * p1;
    double * p2;
    char * p3;
//    引用类型指针变量
    int arr[4];
    int * p4 = arr;

//    初始化指针变量
//    1.取地址运算符-'&'
    int i, * o;
    o = &i;
    int * t = &i;
    int j, * v = &j;

//    访问指针变量指向对象的内容
//    2.间接寻址运算符-'*'

    return 0;
}