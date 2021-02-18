/*************************************************************************
	> File Name: 137.字母三角形.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 05:51:47 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char ch = 'A';
    int n;
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
