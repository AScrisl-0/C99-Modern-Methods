//
// Created by s0_0s on 2023/3/6.
//
#include <Stdio.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

int main (void)
{
    BOOL flag1,flag2;
    BOOL flag3,flag4;

    flag1 = 12;
    flag2 = 0;
    flag3 = TRUE;
    flag4 = FALSE;

    printf("flag1:%d,flag2:%d\n",flag1 ,flag2);
    printf("flag3:%d,flag4:%d\n",flag3 ,flag4);

    return 0;
}