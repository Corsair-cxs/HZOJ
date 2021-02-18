/*************************************************************************
	> File Name: 133.输出乘法表.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 07:09:23 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d*%d=%d", i, i, i * i);
        for (int j = i + 1; j <= n; j++) {
            printf("\t%d*%d=%d", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
