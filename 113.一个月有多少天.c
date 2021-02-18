/*************************************************************************
	> File Name: 113.一个月有多少天.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 03:32:41 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int Month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int is_leap_year(int year);
int main()
{
    int year, month;
    scanf("%d%d", &year, &month);
    if (month != 2 || is_leap_year(year)) {
        printf("%d", Month[month]);
        return 0;
    }
    printf("28");
    return 0;
}
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    }
    return 0;
}

