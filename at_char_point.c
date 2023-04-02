//
// Created by s0_0s on 2023/3/31.
//
#include <stdio.h>

int count_spaces(const char * str);

int main(void)
{
    char str[] = "Hello World ! ";

    printf("统计计数：%d\n",count_spaces(str));
    return 0;
}

int count_spaces(const char * str)
{
    int count = 0;
    for ( ; * str != '\0'; str++) {
        if(*str == ' ')
            count++;
    }
    return count;
}