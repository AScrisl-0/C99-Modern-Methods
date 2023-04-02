//
// Created by s0_0s on 2023/3/31.
//
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "";
    char str2[20] = "  ";

//    strcpy函数-字符串复制-地址并未改变
    strcpy(str1 ,"abcef");
    puts(str1);

//    strlen函数-求字符串长度
    printf("%d\n", strlen(str2));

//    strcat()函数-字符串拼接
    char str3[20] = "";
    strcpy(str3,"edfg");
    strcat(str2,str1);
    puts(str2);
    strcat(str2,str3);
    puts(str2);

//    strcmp()函数-字符串比较
    if (strcmp(str2, str3) == 0) {
        printf("True\n");
    }else{
        printf("False\n");
    }

    return 0;
}