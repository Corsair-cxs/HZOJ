/*************************************************************************
	> File Name: 114.他的名字.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 10:55:22 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    char x;
    scanf("%c", &x);
    switch(x) {
        case 'h':
            printf("He");
            break;
        case 'l':
            printf("Li");
            break;
        case 'c':
            printf("Cao");
            break;
        case 'd':
            printf("Duan");
            break;
        case 'w':
            printf("Wang");
            break;
        default:
            printf("Not Here");
            break;
    }
    return 0;
}
