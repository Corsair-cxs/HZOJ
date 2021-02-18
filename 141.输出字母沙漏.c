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
    char ch = 'A' + n;
    int init_space = n - 1;
    int space = init_space;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int iter = 0 - n + i; iter <= 0; iter++) {
            printf("%c", ch + iter);
        }
        for(int iter = 1; iter <= n - i; iter++) {
            printf("%c", ch - iter);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        printf(" ");
    }
    printf("%c", ch);
    for (int i = n - 1; i >= 0; i--) {
        printf("\n");
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int iter = 0 - n + i; iter <= 0; iter++) {
            printf("%c", ch + iter);
        }
        for(int iter = 1; iter <= n - i; iter++) {
            printf("%c", ch - iter);
        }
    }
    return 0;
}
