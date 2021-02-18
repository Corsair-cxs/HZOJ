/*************************************************************************
	> File Name: 139.输出A字菱形.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 06:03:34 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int init_space = n - 1;
    int space = init_space;
    for (int i = 1; i < n; i++) {
        for (int i_sp = 0; i_sp < space; i_sp++) {
            printf(" ");
        }
        space--;
        for (int j = 0; j < i; j++) {
            printf("AA");
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        printf("AA");
    }
    space = 1;
    for (int i = n - 1; i > 0; i--) {
        printf("\n");
        for (int i_sp = 0; i_sp < space; i_sp++) {
            printf(" ");
        }
        space++;
        for (int j = 0; j < i; j++) {
            printf("AA");
        }
    }
    return 0;
}
