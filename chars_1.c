//
// Created by s0_0s on 2023/3/31.
//

#include <stdio.h>

int main(void)
{

    char date[] = "June 14 and ��ã�����";
    char * dates = "March 31";
//    int len = sizeof (date) / sizeof(date[0]);
//    for (int i = 0; i < len; ++i) {
//        printf(&date[i]);
//    }

//    1.ת��˵��%s����printf����д�ַ���
    printf("%s\n",date);
//    ת��˵��%m.ps,p��Ҫ��ʾ���ַ�����,m��ʾ�����
    printf("%.9s\n",date);
    printf("%16.5s\n",date);

//    2.��һ����ʾ�ַ�������ĺ���- puts()
//    �ú���ֻ��һ������������Ҫ��ʾ���ַ��������⣬puts�����ܻ�������һ�����з�
    puts(date);
    puts(date);

    return 0;
}
