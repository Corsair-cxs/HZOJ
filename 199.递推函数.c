/*************************************************************************
	> File Name: 199.递推函数.c
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sun 01 Nov 2020 11:25:32 PM CST
 ************************************************************************/

#include <stdio.h>

int a[12] = {0};
int num[100005] = {0};
void func(int n, int m) {
    for (int i = 10; i <= n; i++) {
        int sum = 0;
        for (int j = 1; j <= 10; j++) {
            sum += a[j] * num[i - j];
        }
        sum %= m;
        num[i] = sum;
    }
}
int main() {
    int k, m;
    scanf("%d%d", &k, &m);
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &a[i]);
        num[i] = i;
    }
    func(k, m);
    int ans = num[k];
    printf("%d\n", ans);
    return 0;
}
