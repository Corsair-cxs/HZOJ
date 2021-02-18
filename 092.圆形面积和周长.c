/*************************************************************************
	> File Name: 92.圆形面积和周长.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sat 12 Sep 2020 07:54:22 PM CST
 ************************************************************************/

#include<stdio.h>

#define PI 3.14

int main()
{
    double r;
    scanf("%lf", &r);
    printf("%.2lf\n", 2 * PI * r);
    printf("%.2lf", PI * r * r);
    return 0;
}
