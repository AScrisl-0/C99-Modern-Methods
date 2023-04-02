//
// Created by s0_0s on 2023/3/14.
//
#include <stdio.h>
#include <stdbool.h>

bool check(int x,int y,int n);
int checks(int x,int y,int n);

int main(void)
{
    int x,y,n;

    printf("Enter three numbers of box: ");
    scanf("%d%d%d",&x,&y,&n);

    bool is_right = check(x,y,n);
    int test = checks(x,y,n);

    printf("is_right:%d\n",is_right);
    printf("is_right:%d\n",test);

    return 0;
}

bool check(int x,int y,int n)
{
    if ((x >=0 && x <= n - 1) && (y >= 0 && y <= n - 1)){
        return 1;
    }else{
        return 0;
    }
}

int checks(int x,int y,int n)
{
    return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}