//
// Created by s0_0s on 2023/3/31.
//

#include <stdio.h>
#include <string.h>

#define DATES printf("Compiled on %s at %s\n", __DATE__, __TIME__)

void censor(char str[]);

int main(void)
{
    char str[] = "food and doo fooooodx";

    censor(str);

    puts(str);

    printf("%d\n",__STDC__);
    printf("%d\n",__STDC_HOSTED__);
    printf("%d\n",__STDC_VERSION__);
    printf("%s\n",__FILE__);
    printf("Wacky Windows (c) 2010 Wacky Software, Inc.\n");

    DATES;

//    printf("Compiled on %s at %s\n", __DATE__, __TIME__);
    return 0;
}

void censor(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == 'f' && str[i + 1] == 'o' && str[i + 2] == 'o')
            str[i] = str[i + 1] = str[i + 2] = '*';
}