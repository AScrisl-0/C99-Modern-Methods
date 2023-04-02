//
// Created by s0_0s on 2023/3/31.
//

#include <stdio.h>

int main(void)
{

    char date[] = "June 14 and 你好，世界";
    char * dates = "March 31";
//    int len = sizeof (date) / sizeof(date[0]);
//    for (int i = 0; i < len; ++i) {
//        printf(&date[i]);
//    }

//    1.转换说明%s允许printf函数写字符串
    printf("%s\n",date);
//    转换说明%m.ps,p是要显示的字符数量,m表示栏宽度
    printf("%.9s\n",date);
    printf("%16.5s\n",date);

//    2.另一种显示字符串输出的函数- puts()
//    该函数只有一个参数，即需要显示的字符串，另外，puts函数总会额外添加一个换行符
    puts(date);
    puts(date);

    return 0;
}
