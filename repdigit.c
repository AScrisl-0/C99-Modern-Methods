//
// Created by s0_0s on 2023/3/9.
//
#include <Stdio.h>
#include <stdbool.h>

#define LEN 10

int main(void)
{
    bool digit_seen[LEN] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld",&n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit]){
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }

    if (n > 0){
        printf("Repeated digit\n");
    }else{
        printf("No Repeated Digit\n");
    }

    return 0;
}