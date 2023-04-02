//
// Created by s0_0s on 2023/3/18.
//
#include <stdio.h>

void decompose(double x,long * int_part, double * frac_part);

int main(void)
{
    int i,j,* p,* q,* n, * m;
//    任意数量的指针变量可以指向同一个对象
    p = &i,q = &j;
//    指针  *p
//    指针变量 p
//    指针赋值语句           q = p;
//    指针所指对象的值复制    *q = *p;
//    指针所指对象进行赋值    * p = 1;
//    指针变量只能给赋值地址(错误写法)p = i;
//    * q = 2;

/*//   *p,*q表示：p,q所指对象的值
    printf("%d\n",*p);
    printf("%d\n",*q);
//   p,q表示：p,q所指对象的地址值
    printf("%x\n",p);
    printf("%x\n",q);
    printf("%x\n",&i);
*/

    long a;
    double d;

    decompose(3.1415926,&a,&d);
    decompose(2.718,&a,&d);

//    printf("%d\n",a);
//    printf("%.2f\n",d);

    return 0;
}

void decompose(double x,long * int_part, double * frac_part)
{
    * int_part = (long) x;
    * frac_part = x - *int_part;

    printf("%ld\n",*int_part);
    printf("%.5f\n",*frac_part);
}