/*************************************************************************
	> File Name: 100.计算复利.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 09:35:09 AM CST
 ************************************************************************/

#include<stdio.h>

#define INTER_RATE 0.00417

int main()
{
    int n, month;
    scanf("%d%d", &n, &month);
    double money = (double)n * (1 + INTER_RATE);
    for (int i = 2; i <= month; i++) {
        money += (double)n;
        money *=(1 + INTER_RATE);
    }
    printf("$%.2lf", money);
    return 0;
}
