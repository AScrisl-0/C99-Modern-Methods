//
// Created by s0_0s on 2023/3/13.
//
#include <stdio.h>

void count_print(int n);

int main(void)
{
    int i,n;

    printf("Enter of a number : ");
    scanf("%d",&n);

    for (i = n - 1 ; i > 0 ; i--){
        count_print(i);
    }

//    printf("%d\n",1 & 0);
//    printf("%d\n",0 && 1);
//    printf("%d\n",1 | 0);
//    printf("%d\n",0 || 1);
//    printf("%d\n",!1);
//    printf("%d\n",!0);

    return 0;
}
void count_print(int n)
{
    printf("T minus %d and counting \n",n);
}