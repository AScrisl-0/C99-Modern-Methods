//
// Created by s0_0s on 2023/3/17.
//
#include <stdio.h>

int main(void)
{
    int i ,j,k,* p = &i;

    i = 1;
    printf("i:%d\n",i);
    printf("p:%d\n",*p);
//    打印i的地址值
    printf("%x\n",&i);
//    打印p变量存储的值
    printf("%x\n",p);

    *p = 2;
    printf("i:%d\n",i);
    printf("p:%d\n",*p);

    j = *&i; /* same as j = i; */
    j++;
    k = * p; /* 仅将指针变量所指对象的值给复制 */
    k++;
    printf("i:%d\n",i);
    printf("j:%d\n",j);
    printf("k:%d\n",k);
    printf("i:%d\n",i);
    printf("%x\n",&j);
    printf("%x\n",&k);

    return 0;
}