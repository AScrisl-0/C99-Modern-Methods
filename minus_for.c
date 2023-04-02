//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
//    for (int i = 10; i > 0; --i) {
//        printf("T minus %d and counting\n",i);
//    }
//
//    for (int i = 10; i > 0 ; ) {
//        printf("T minus %d and counting\n",i--);
//    }
//    /* 等价于 do while 语句 */
//    for (int i = 10; i > 0 ; ) {
//        printf("T minus %d and counting\n",--i);
//    }
    int i = 10;
//    for (; i > 0; --i){
//        printf("T minus %d and counting\n",i);
//    }

    /* 等价于 while 语句， --i or i-- 一样 */
    for ( ; i > 0 ; ) {
        printf("T minus %d and counting\n",i--);
    }

    return 0;
}