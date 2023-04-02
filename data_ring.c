//
// Created by s0_0s on 2023/3/13.
//
#include <stdio.h>

int main(void)
{
    int a;
    unsigned int _a;
    float b;
//    unsigned float _b;
    double c;
//    unsigned double _c;
    _Bool d;

    short x ;
    unsigned short _x ;
    long y;
    unsigned long _y;
    long long z;
    unsigned long long _z;

    long int v;
    _Complex zz;
//    printf("%d\n",x);
    printf("short:%d\t\t", sizeof(x));
    printf("int:%d\t\t", sizeof(a));
    printf("long:%d\t\t", sizeof(y));
    printf("long long:%d\n", sizeof(z));
    printf("unsigned short:%d\t", sizeof(_x));
    printf("unsigned int:%d\t", sizeof(_a));
    printf("unsigned long:%d\t", sizeof(_y));
    printf("unsigned long long:%d\n", sizeof(_z));
    printf("float:%d\t\t", sizeof(b));
    printf("double:%d\t\t\n", sizeof(c));
    printf("bool:%d\n", sizeof(d));
    printf("long int:%d\t",sizeof (long int));
    printf("unsigned long int:%d\n",sizeof (unsigned long int));
    printf("_Comple:%d\n",sizeof (_Complex));

    int cc = 12;
    int co = 34;

    printf("%d",cc != co);

    return 0;
}