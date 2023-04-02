//
// Created by s0_0s on 2023/3/31.
//
/*
 *逐个读取字符串
 */
#include <stdio.h>

int read_line(char str[] ,int n);

int main(void)
{
    char str[10];
//    read_line(str,10);

    printf("CharArray len:%d\n", read_line(str,10));

    puts(str);

    return 0;
}

int read_line(char str[] ,int n)
{
    int ch ,i = 0;

    while ((ch = getchar()) != '\n'){
        if(i < n)
            str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}