/*************************************************************************
	> File Name: 443.校门外的树.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 09:35:26 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ROAD[10005] = {0};
int main()
{
    int L, M;
    int start, end;
    int count = 0;
    scanf("%d%d", &L, &M);
    memset(ROAD, 0, L + 1);
    for (int i = 0; i < M; i++) {
        scanf("%d%d", &start, &end);
        memset(ROAD + start, 1, end - start + 1);
    }
    for (int i = 0; i <= L; i++) {
        if(!ROAD[i]) count++;
    }
    printf("%d", count);
    return 0;
}
