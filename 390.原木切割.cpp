/*************************************************************************
	> File Name: 390.原木切割.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 06:12:25 PM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int func2(int *len, int n, int goal) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += len[i] / goal;
    }
    return sum;
}
void func(int *len, int n, int m) {
    int l = 0, r = len[n - 1], mid;
    while (l != r) {
        mid = (l + r + 1) / 2;
        if (func2(len, n, mid) < m) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    cout << l << endl;
};
int main() {
    int len_wood[100005];
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> len_wood[i];
    }
    sort(len_wood, len_wood + n);
    func(len_wood, n, m);
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 04:44:53 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

int n, m, tr;
int nums[100005];
double val;

int func2(int len) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += nums[i] / len;
    }
    return s;
}

int func() {
    int l = 1, r = tr;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int s = func2(mid);
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
        cin >> nums[i];
    }
    sort(nums, nums + n);
    tr = nums[n - 1];
    cout << func() << endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
