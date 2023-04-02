//
// Created by s0_0s on 2023/3/31.
//
#include <stdio.h>

int main(void)
{
//    转换说明%s允许scanf函数读入字符数组
    char str1[] = "";
    char str2[10];

    printf("Enter a sentence: \n");
//    调用时scanf函数会跳过空白字符,遇到空白字符截至且始终会在字符串末尾存储一个空字符
//    scanf("%s",str1);

//    在指定字符限制（不包含空白字符）的情况
//    scanf("%7s",str1);

//    gets()函数可以读取空白字符，不安全已被新标准给与废除，经常发生数组越界
//    gets(str2);

    puts(str1);

    puts(str2);

    return 0;
}