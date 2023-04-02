//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int i=2,j=3;
    float x=3.14f,y=2.7f;

    printf("i=%d,j=%d,",i,j);
    printf("x=%g,y=%g\n",x,y);    /* g的转换将不显示尾随的零 */
    printf("x=%f,y=%f\n",x,y);

    return 0;
}