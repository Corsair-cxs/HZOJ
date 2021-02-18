/*************************************************************************
	> File Name: 95.交换两位数.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 09:25:55 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d%d", n % 10, n / 10);
    return 0;
}
