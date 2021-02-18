/*************************************************************************
	> File Name: 148.字符反转.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 08:49:07 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[55];
    scanf("%s", s);
    int size_s = strlen(s) - 1;
    while(size_s > -1) printf("%c", s[size_s--]);
    return 0;
}
