//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    char ch;
//    do {
//        scanf("%c", &ch);
//        putchar(ch);
//    } while (ch != '\n');

//    do {
//        ch = getchar();
//        putchar(ch);
//    } while (ch != '\n');


//    while ((ch = getchar()) != '\n') { ; }

    while ((ch = getchar()) == ' ') /* skips blanks */
        ;

    return 0;
}
