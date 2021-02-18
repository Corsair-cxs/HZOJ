/*************************************************************************
	> File Name: 101.计算各位和.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 09:47:45 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n, sum;
    sum = 0;
    scanf("%d", &n);
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}
