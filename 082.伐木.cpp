/*************************************************************************
	> File Name: 82.伐木.cpp
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 07:45:29 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

int n, m, num[1000005], tr;

long long func2(int high) {
    long long s = 0;
    for(int i = 0; i < n; i++) {
        if(num[i] > high) {
            s += num[i] - high;
        }
    }
    return s;
}
int func() {
    int l = 0, r = tr;
    while(l != r) {
        int mid = (l + r + 1) / 2;
        long long s = func2(mid);
        if (s >= m) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return l;
}
int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        tr = max(tr, num[i]);
    }
    cout << func() << endl;
    return 0;
}
