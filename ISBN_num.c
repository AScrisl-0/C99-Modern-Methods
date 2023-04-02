//
// Created by s0_0s on 2023/3/5.
//
#include <stdio.h>

int main(void)
{
    int First_Group,Second_Group,Third_Group,Fourth_Group,Fifth_Group;
    int num;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&First_Group,&Second_Group,&Third_Group,&Fourth_Group,&Fifth_Group);

    printf("GS1 prefix: %d\n",First_Group);
    printf("Group identifier: %d\n",Second_Group);
    printf("Publisher code: %d\n",Third_Group);
    printf("Item number: %d\n",Fourth_Group);
    printf("Check digit: %d\n",Fifth_Group);

    return 0;
}