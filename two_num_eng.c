//
// Created by s0_0s on 2023/3/6.
//
#include <stdio.h>

int main(void)
{
    int num1,num2;

    printf("Enter a two-digit number : ");
    scanf("%1d%1d",&num1,&num2);

    printf("You entered the number ");

    if (num1 * 10 + num2 == 11 )
        printf("eleven");
    else if (num1 * 10 + num2 == 12 )
        printf("twelve");
    else if (num1 * 10 + num2 == 13 )
        printf("thirteen");
    else if (num1 * 10 + num2 == 14 )
        printf("fourteen");
    else if (num1 * 10 + num2 == 15 )
        printf("fifteen");
    else if (num1 * 10 + num2 == 16 )
        printf("sixteen");
    else if (num1 * 10 + num2 == 17 )
        printf("seventeen");
    else if (num1 * 10 + num2 == 18 )
        printf("eighteen");
    else if (num1 * 10 + num2 == 19 )
        printf("nineteen");
    else {
        switch (num1) {
            case 0:
                printf(" ");break;
            case 2:
                printf("twenty");break;
            case 3:
                printf("thirty");break;
            case 4:
                printf("forty");break;
            case 5:
                printf("fifty");break;
            case 6:
                printf("sixty");break;
            case 7:
                printf("seventy");break;
            case 8:
                printf("eighty");break;
            case 9:
                printf("ninety");break;
            default:
                printf("ten");break;
        }
        switch (num2) {
            case 0:
                printf(" ");break;
            case 1:
                printf("-");
                printf("one");break;
            case 2:
                printf("-");
                printf("two");break;
            case 3:
                printf("-");
                printf("three");break;
            case 4:
                printf("-");
                printf("four");break;
            case 5:
                printf("-");
                printf("five");break;
            case 6:
                printf("-");
                printf("six");break;
            case 7:
                printf("-");
                printf("seven");break;
            case 8:
                printf("-");
                printf("eight");break;
            case 9:
                printf("-");
                printf("nine");break;
        }
    }

    return 0;
}