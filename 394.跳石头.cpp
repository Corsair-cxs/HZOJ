/*************************************************************************
	> File Name: 394.跳石头.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 09:23:58 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int func2(int *num, int n, int goal) {
    int last = 0, cnt = 0;
    for (int i = 1; i <= n + 1; i++) {
        if (num[i] - last < goal) {
            cnt++;
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 08:23:49 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int len, n, m, num[50005], tl = 0x7fffffff, tr;

int func2(int len) {
    int cnt = 0, last = 0;
    for (int i = 1; i <= n + 1; i++) {
        if (num[i] - last < len) {
            cnt ++;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
        } else {
            last = num[i];
        }
    }
    return cnt;
<<<<<<< HEAD
};
void func(int *num, int n, int m, int len_l, int len_r) {
    int l = len_l, r = len_r, mid;
    while (l != r) {
        mid = (l + r + 1) / 2;
        if (func2(num, n, mid) <= m) {
=======
}

int func() {
    int l = tl, r = tr;
    while (l != r) {
        int mid = (l + r + 1) / 2;
        int s = func2(mid);
        if (s <= m) {
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
            l = mid;
        } else {
            r = mid - 1;
        }
    }
<<<<<<< HEAD
    cout << r << endl;
};
int main() {
    int len, m, n, num[50005], len_l = 0, len_r;
    cin >> len >> n >> m;
    len_r = len;
    num[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        len_l = min(len_l, num[i] - num[i - 1]); 
    }
    num[n + 1] = len;
    len_l = min(len_l, num[n + 1] - num[n]);
    func(num, n, m, len_l, len_r);
=======
    return r;

}
int main() {
    cin >> len >> n >> m;
    tr = len;
    num[0] = 0;
    if (!n) {
        tl = 0;
    }
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
        tl = min(num[i] - num[i - 1], tl);
    }
    num[n + 1] = len;
    tl = min(num[n + 1] - num[n], tl);
    cout << func() << endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
