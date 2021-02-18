/*************************************************************************
	> File Name: 97.求和2.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 09:29:32 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    long int n, sum;
    scanf("%ld", &n);
    sum = n * (n + 1) / 2;
    printf("%ld", sum);
    return 0;
}
