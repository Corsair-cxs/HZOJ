/*************************************************************************
	> File Name: 100.计算复利.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 09:35:09 AM CST
 ************************************************************************/

#include<stdio.h>

#define INTER_RATE 0.00417
#define MONTH 6

int main()
{
    int n;
    scanf("%d", &n);
    double money = (double)n * (1 + INTER_RATE);
    for (int i = 2; i <= MONTH; i++) {
        money += (double)n;
        money *=(1 + INTER_RATE);
    }
    printf("$%.2lf", money);
    return 0;
}
