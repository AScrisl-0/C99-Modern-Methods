//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    long i;
    int j = 1000;

    char ch;
    ch = '\033';
//    i = j * j;
    i = (long) j * j;

    printf("%d\n",ch);
    printf("i=%d\n",i);

    printf("Size of int: %lu\n", (unsigned long) sizeof(int));

    printf("Size of int: %zu\n", sizeof(int)); /* C99 only */


    printf("Size of float: %d\n",sizeof (float));
    printf("Size of int: %d\n",sizeof (int));
    printf("Size of double: %d\n",sizeof (double));
    printf("Size of char: %d\n",sizeof (char));
    printf("Size of _Bool: %d\n",sizeof (_Bool));

    return 0;
}