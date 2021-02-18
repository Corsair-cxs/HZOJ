/*************************************************************************
	> File Name: 107.七的奇倍数.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 10:29:18 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%s", (!(n % 7) && (n % 2)) ? "YES" : "NO");
    return 0;
}
