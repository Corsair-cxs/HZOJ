/*************************************************************************
	> File Name: 144.字符串中A的数量.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 08:54:06 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char ch;
    int count = 0;
    while (scanf("%c", &ch) != EOF && ch != '\0') {
        if (ch == 'A') {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
