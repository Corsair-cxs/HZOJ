/*************************************************************************
	> File Name: 136.N以内7的倍数.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 05:43:52 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d", &num);
    for(int i = 7; i <= num; i+=7) {
        printf("%d\n", i);
    }

    return 0;
}
