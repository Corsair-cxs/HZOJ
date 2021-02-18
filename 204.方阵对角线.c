/*************************************************************************
	> File Name: 204.方阵对角线.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 09:55:32 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    int height[905];
    memset(height, 0, sizeof(int) * 905);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n * n; i++) {
        scanf("%d", &height[i]);
    }
    for (int i = 0; i < n; i++) {
        int num = 1 + (i * (n + 1));
        printf("%d\n", height[num]);
    }
    return 0;
}
