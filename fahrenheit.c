//
// Created by s0_0s on 2023/3/4.
//
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (9.0f / 5.0f)

int main(void)
{
    float fahrenheit,celsius;

    printf("Enter Celsius Temperature: ");
    scanf("%f",&celsius);

    fahrenheit = SCALE_FACTOR * celsius + FREEZING_PT;

    printf("Fahrenheit equivalent: %.0f\n",fahrenheit);

    return 0;
}