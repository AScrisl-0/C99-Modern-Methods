//
// Created by s0_0s on 2023/3/31.
//
/*
 * 访问字符串中的字符
 * 统计字符串中的空格数量
 */
#include <stdio.h>

int count_spaces(const char str[]);//const表明该函数不会改变数组

int main(void)
{
    char str[] = "Hello World !";

     printf("统计计数：%d\n",count_spaces(str));

    return 0;
}

int count_spaces(const char str[])
{
    int count = 0,i;

    for (i = 0; str[i] != '\0'; ++i) {
        if(str[i] == ' ')
            count++;
    }
    return count;
}