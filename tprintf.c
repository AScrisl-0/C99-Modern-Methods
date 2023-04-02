//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int i = 40;
    float x = 839.21f;

    /* m.p格式：最小栏宽.显示位数 */
    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%10.3f|%10.3e|%-10g|\n",x,x,x);

    return 0;
}