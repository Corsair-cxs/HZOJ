/*************************************************************************
	> File Name: 150.矩阵旋转.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 10:13:58 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int nums[250][250];
    int m, n;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &nums[i][j]);
        }
    }
    for (int i = 1; i <= m; i++) {
        for(int j = n; j >= 1; j--) {
            printf("%d",nums[j][i]);
            if (j > 1) {
                printf(" ");    
            }
        }
        printf("\n");
    }
    return 0;
}
