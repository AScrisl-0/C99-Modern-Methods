//
// Created by s0_0s on 2023/3/31.
//
/*
 * �����ַ����е��ַ�
 * ͳ���ַ����еĿո�����
 */
#include <stdio.h>

int count_spaces(const char str[]);//const�����ú�������ı�����

int main(void)
{
    char str[] = "Hello World !";

     printf("ͳ�Ƽ�����%d\n",count_spaces(str));

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