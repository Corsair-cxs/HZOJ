/*************************************************************************
	> File Name: 389.暴躁的程序猿.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 04:17:44 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int func2(int *num, int n, int dis) {
    int cnt = 0, last = 0;
    cout << endl << "---------------" << endl;
    for (int i = 1; i < n; i++) {
        cout << "LAST: " << last << " I: " << i << endl;
        if (num[i] - num[last] >= dis) {
            last = i;
            cnt++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << num[i] << endl;
    }
    cout << "CNT_FUNC: " << cnt << endl;
    return cnt + 1;
};
int func(int *num, int n, int goal_cnt) {
    int l = 0, r = num[n - 1], mid;
    while (l != r) {
        mid = (l + r + 1) / 2;
        int cnt = func2(num, n, mid);  
        cout << "MID: " << mid << endl;
        cout << "CNT: " << cnt << endl;
        if (cnt >= goal_cnt) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    return r;
}
int main() {
    int m, n;
    int num[100005] = {0};
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
    }
    sort(num, num + m);
    cout << func(num, m, n) << endl;
    return 0;
}
