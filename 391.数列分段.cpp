/*************************************************************************
	> File Name: 391.数列分段.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 08:21:48 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int func2(int *num, int n, long long goal) {
    int cnt = 0;
    long long now = 0;
    for(int i = 0; i < n; i++) {
        if (num[i] + now == goal) {
            cnt++;
            now = 0;
        } else if (num[i] + now < goal) {
            now += num[i];
        } else {
            now = num[i];
            cnt++;
        }
    }
    if (now > 0) {
        cnt++;
    }
    return cnt;
};
void func(int *num, int n, int m, long long max_l, long long max_r) {
    long long l = max_l, r = max_r, mid;
    while (l != r) {
        mid = (l + r) / 2;
        int cnt = func2(num, n, mid);
        if (cnt > m) {
            l = mid + 1;
        } else {
            r = mid;
        }   
    }
    cout << r << endl;
};
int main() {
    ios::sync_with_stdio(false);
    int n, m, num[100005] = {0};
    long long max_mid = 0, max_l = 0, max_r = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        max_r += num[i];
        max_l = max(max_l, (long long)num[i]);
    }
    func(num, n, m, max_l, max_r);
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 06:09:48 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

long long nums[100005];
long long m, n, n_max, tl, tr;

int func2(long long sum) {
    long long now = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (now + nums[i] == sum) {
            cnt++;
            now = 0;
        } else if (now + nums[i] > sum) {
            cnt++;
            now = nums[i];
        } else {
            now += nums[i];
        }
    }
    if (now) {
        cnt++;
    }
    return cnt;
}

long long func() {
    while (tl != tr) {
        long long mid = (tl + tr) / 2;
        int s = func2(mid);
        if(s > m) {
            tl = mid + 1;
        } else {
            tr = mid;
        }
    }
    return tl;
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        tl = max(tl, nums[i]);
        tr += nums[i];
    }
    cout << func() << endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
