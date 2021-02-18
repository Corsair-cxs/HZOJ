/*************************************************************************
	> File Name: 108.求面积的问题.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 10:32:33 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char op;
    double m, n;
    scanf("%c%lf%lf", &op, &m, &n);
    if (op == 'r') {
        printf("%.2lf", m * n);
    } else if (op == 't') {
        printf("%.2lf", m * n / 2);
    }
    return 0;
}
