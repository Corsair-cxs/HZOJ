/*************************************************************************
	> File Name: 94.计算BMI.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 09:12:57 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    float w, h;
    scanf("%f%f", &w, &h);
    printf("%.2f", w / (h * h));
    return 0;
}
