/*************************************************************************
	> File Name: 393.切绳子.cpp
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 07:17:26 PM CST
 ************************************************************************/

#include<iostream>
#include<cstdio>

using namespace std;

double len[10000], l, r;
int n, k;

int func2(double threshold) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += (int)(len[i] / threshold);
    }
    return cnt;
}

double func() {
    while (r - l >= 0.00001) {
        double mid = l + (r - l) / 2;
        if (func2(mid) < k) {
            r = mid;
        } else {
            l = mid;
        }
    }
    return l;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> len[i];
        r = max(r, len[i]);
    }  
    double ans = func();
    printf("%.2f", (int)(ans * 100) / 100.0);
    return 0;
}
