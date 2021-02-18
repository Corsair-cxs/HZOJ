/*************************************************************************
	> File Name: 120.日期合法性.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 04:22:50 PM CST
 ************************************************************************/

#include<stdio.h>

int Month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap_year(int year);
int first_judge(int year, int month, int day);
int main()
{
    int year, month, day;
    scanf("%d%d%d", &year, &month, &day);
    if (first_judge(year, month, day)) {
        if (Month[month] >= day) {
            if(month != 2 || is_leap_year(year)) {
                printf("YES");
                return 0;
            } else {
                if (day < 29) {
                    printf("YES");
                    return 0;
                }
            }    
        }
    }   
    printf("NO");
    return 0;
}

int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;            
    }
    return 0;
}

int first_judge(int year, int month, int day)
{
    if (month > 0 && month < 13 && day > 0 && day < 32)
        return 1;
    return 0;
}
