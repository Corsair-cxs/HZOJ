/*************************************************************************
	> File Name: 205.队列行平均数.c
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 26 Oct 2020 10:37:04 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n , m, len, len_sum;
    double avg;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        len_sum = 0;
        avg = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &len);
            len_sum += len;
        }
        avg = (double)len_sum / m;
        printf("%3.6lf\n", avg);
    }
    return 0;
}
