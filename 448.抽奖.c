/*************************************************************************
	> File Name: 448.抽奖.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 08:58:48 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int prize_num[102], n, num;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", prize_num + i);
    }
    scanf("%d", &num);
    for (int i = 1; i <= n; i++) {
        if (prize_num[i] == num) {
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
    return 0;
}
