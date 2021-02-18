/*************************************************************************
	> File Name: 109.四位数中有偶数位么.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 10:49:29 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n) {
        if(n % 2 == 0) {
            printf("YES");
            return 0;
        }
        n /= 10;
    }
    printf("NO");
    return 0;
}
