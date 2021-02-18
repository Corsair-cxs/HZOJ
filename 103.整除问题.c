/*************************************************************************
	> File Name: 103.整除问题.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 10:24:49 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s", (a % b) ? "NO" : "YES");

    return 0;
}
