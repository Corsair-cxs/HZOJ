/*************************************************************************
	> File Name: 102.注水问题.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 10:15:15 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int t_a, t_b, t_c, t;
    scanf("%d%d%d%d", &t_a, &t_b, &t_c, &t);
    double v_a, v_b, v_c;
    v_a = 1.0 / t_a;
    v_b = 1.0 / t_b;
    v_c = (-1.0) / t_c;
    double V_now = (v_a + v_b) * t;
    double t_remain = (1 - V_now) / (v_a + v_b + v_c);
    printf("%.2lf", t + t_remain);
    return 0;
}
