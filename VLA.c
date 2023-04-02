//
// Created by s0_0s on 2023/3/10.
//
#include <stdio.h>

int main(void)
{
#if defined __STDC__ && defined __STDC_VERSION__ && (__STDC_VERSION__ == 199901)
#define VLA_SUPPORTED 1
#elif defined __STDC__ && defined __STDC_VERSION__  && (__STDC_VERSION__ >= 201112)  && \
    (__STDC_NO_VLA__ != 1)
#define VLA_SUPPORTED 1
#else
#define VLA_SUPPORTED 0
#endif

    return 0;
}