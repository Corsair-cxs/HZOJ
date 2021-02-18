/*************************************************************************
	> File Name: 87.矩形的面积与周长.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sat 12 Sep 2020 07:44:40 PM CST
 ************************************************************************/

#include<stdio.h>

int main() 
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("%.2lf\n", 2 * (a + b));
    printf("%.2lf", a * b);
    return 0;
}
