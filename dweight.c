//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

int main(void)
{
    int height,length,width,volumne,weight; /* 声明变量 */

    height = 8;
    length = 12;
    width = 10;
    volumne = height * length * width;
    weight = (volumne + 165) / 166;

    printf("Dimensions:%dx%dx%d\n",length,width,height);
    printf("Volume:%d\n",volumne);
    printf("Dimensional weight:%d\n",weight);

    return 0;
}