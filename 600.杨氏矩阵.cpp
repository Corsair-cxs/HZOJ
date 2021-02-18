/*************************************************************************
	> File Name: 600.杨氏矩阵.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM07:52:17
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int n, m, t, now;
int num[3005][3005];

int main() {
    scanf("%d%d%d", &n, &m, &t);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &num[i][j]);
        }
    }
    int x = n, y = 1;
    while (x > 0 && y > 0 && x <= n && y <= m) {
        if (num[x][y] == t) {
            printf("%d %d", x, y);
        }
        if (num[x][y] > t) {
            x--;
        } else {
            y++;
        }
    }
    
    return 0;
}
