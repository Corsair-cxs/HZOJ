/*************************************************************************
	> File Name: 516.奶牛碑文.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM08:18:32
 ************************************************************************/

#include <stdio.h>

char lg[100005] = {0};
int n, c_cnt[10005], w_cnt = 0;
long long ans;
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%c", &lg[i]);
        if (lg[i] == 'C') {
            c_cnt[i] = c_cnt[i - 1] + 1;
        } else {
            c_cnt[i] = c_cnt[i - 1];
        }

    }
    for (int i = n; i > 0; i--) {
        if (lg[i] == 'O') {
            ans += c_cnt[i - 1] *(long long) w_cnt;
        } else if (lg[i] == 'W') {
            w_cnt++;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
