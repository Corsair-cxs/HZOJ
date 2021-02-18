/*************************************************************************
	> File Name: 131.n个数的极差.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 05:30:22 PM CST
 ************************************************************************/

#include<stdio.h>
void range_calc(int n, int *max, int *min);
int main()
{
    int min = 0x7FFFFFFF, max = 0x80000000;
    //printf("%d %d", min, max);
    int n;
    scanf("%d", &n);
    range_calc(n, &max, &min);
    printf("%d", max - min);
    return 0;
}

void range_calc(int n, int *max, int *min)
{
    int num;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num > *max) {
            *max = num;
        }
        if(num < *min) {
            *min = num;
        }
    }
}
