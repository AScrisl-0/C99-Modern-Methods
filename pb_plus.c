//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>

long long pb(int n);
void po_8(int n);
void px_16(int n);
long long num_digit(long long n);

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Output of pb: ");
    long long num1 = pb(n);
    int result = num_digit(num1);
    printf("   %d\n",result);
//    printf("\n");
    printf("Output of po_8: ");
    po_8(n);
    printf("\n");
    printf("Output of px_16: ");
    px_16(n);
    printf("\n");

    printf("\n");

    return 0;
}

long long pb(int n)
{
    long long res;
    if (n != 0) {
        pb(n / 2);
        res = putchar('0' + n % 2);
    }
    return res;
}

void po_8(int n)
{
    if (n != 0) {
        po_8(n / 8);
        putchar('0' + n % 8);
    }
}


void px_16(int n)
{
    if (n != 0) {
        px_16(n / 16);
        putchar('0' + n % 16);
    }
}

long long num_digit(long long n)
{
    long long result = 0;
    do {
        n /= 10;
        result++;
    }while(n != 0);

    return result;
}