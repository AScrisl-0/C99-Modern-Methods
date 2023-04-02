//
// Created by s0_0s on 2023/3/7.
//
#include <stdio.h>

int main(void)
{
    int n = 1;
//    for (;;) {
//        printf("Enter a number (enter 0 to stop): ");
//        scanf("%d", &n);
//        if (n == 0) {
//            printf("Illegal Input!\n");
//            break;
//        }
//        printf("%d cubed is %d\n", n, n * n * n);
//    }
    while (n != 0)
    {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d",&n);

        if (n == 0){
            printf("Illegal Input!\n");
            break;
        }
        printf("%d cubed is %d\n",n,n * n * n);
    }
    return 0;
}