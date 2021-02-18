/*************************************************************************
	> File Name: 90.取数位II.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sat 12 Sep 2020 07:49:16 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", a / 100);
    printf("%d\n", (a % 100) / 10);
    printf("%d\n", a % 10);
    return 0;
}
