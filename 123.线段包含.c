/*************************************************************************
	> File Name: 123.线段包含.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 03:27:26 PM CST
 ************************************************************************/

#include<stdio.h>

int main() 
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    printf("%s", ((a - c) * (b - d) <= 0) ? "YES": "NO");
    return 0;
}
