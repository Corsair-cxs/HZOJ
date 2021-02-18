/*************************************************************************
	> File Name: 126.圆环面积.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 09:20:24 AM CST
 ************************************************************************/

#include<stdio.h>

#define PI 3.14

int main()
{
    double r_in, r_out, S;
    scanf("%lf%lf", &r_out, &r_in);
    S = PI * (r_out * r_out - r_in * r_in);
    printf("%.2lf", S);
    return 0;
}
