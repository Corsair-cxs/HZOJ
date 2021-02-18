/*************************************************************************
	> File Name: 128.n个数的平均数.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 05:16:01 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n, num;
    long int sum = 0;
    double avg;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }
    avg = (double)sum / n;
    printf("%.2lf", avg);
    return 0;
}
