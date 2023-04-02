//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int len = 0;

    printf("Enter a message: ");
    while (getchar() != '\n'){
        len++;
    }
    printf("Your message was %d characters long\n",len);

    return 0;
}