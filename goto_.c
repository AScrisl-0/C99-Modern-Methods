//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int d,n;

    printf("Enter a number :");
    scanf("%d",&n);

    for (d = 2; d < n;d++){
        if (n % d == 0)
            goto done;
    }
    done:
    if (d < n ){
        printf("%d is divisible by %d\n",n,d);
    }else{
        printf("%d is prime\n",n);
    }

    return 0;
}