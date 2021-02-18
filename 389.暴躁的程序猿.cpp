/*************************************************************************
	> File Name: 389.暴躁的程序猿.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 04:17:44 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int func2(int *num, int n, int dis) {
    int cnt = 0, last = 0;
    for (int i = 1; i < n; i++) {
        cout << endl << "---------------" << endl;
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
    return cnt;
};
int func(int *num, int n, int goal_cnt) {
    int l = 0, r = num[n - 1], mid;
    while (l != r) {
        mid = (l + r + 1) / 2;
        int cnt = func2(num, n, mid);  
        cout << "MID: " << mid << endl;
        cout << "CNT: " << cnt << endl;
        if (cnt < goal_cnt) {
            r = mid - 1;
        } else {
            l = mid;
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 04:03:16 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;

int n, m, num[100005];

int func2(int dis) {
    int s = 1, last = num[0];
    for(int i = 1; i <= n; i++) {
        if (num[i] - last >= dis) {
            s++;
            last = num[i];
        }
    }
    return s;
}

int func() {
    int l = 1, r = num[n - 1];
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int s = func2(mid);
        if (s >= m) {
            l = mid;
        } else {
            r = mid - 1;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
        }
    }
    return r;
}
<<<<<<< HEAD
int main() {
    int m, n;
    int num[100005] = {0};
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
    }
    sort(num, num + m);
    cout << func(num, m, n) << endl;
=======

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    sort(num, num + n);
    cout << func <<endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
