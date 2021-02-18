/*************************************************************************
	> File Name: 386.吃瓜群众.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 10:15:58 AM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;

struct node {
    int num;
    int cnt;
};
bool cmp(node a, node b) {
    if (a.cnt == b.cnt) {
        return a.num < b.num;
    }
    return a.cnt < b.cnt;
};

node wm[100005] = {0};
int n, m, goal;

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> wm[i].cnt;
        wm[i].num = i + 1;
    }
    sort(wm, wm + m, cmp);
    int flag;
    while (n--) {
        cin >> goal;
        flag = 0;
        int l = 0, r = m - 1, mid = (l + r) / 2;
        while (l <= r) {
            mid = (l + r) / 2;
            if (wm[mid].cnt == goal) {
                cout << wm[mid].num << endl;
                flag = 1;
                break;
            }
            if (wm[mid].cnt < goal) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        if (!flag) {
            cout << 0 << endl;
        }
    }


=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 02:48:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;

struct WM {
    int num;
    int count;
};

bool cmp(WM a, WM b) {
    if (a.count == b.count) {
        return a.num < b.num;
    }
    return a.count < b.count;
};

WM wm[100005];
int n, m;

int main() {
    ios::sync_with_stdio(false);
    // scanf("%d%d", &n, &m);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        wm[i].num = i + 1;
        //scanf("%d", &wm[i].count);
        cin >> wm[i].count;
    }
    sort(wm, wm + n, cmp);
    for(int i = 0; i < m; i++) {
        int t, l = 0, r = n-1, f = 0;
        //scanf("%d", &t);
        cin >> t; 
        while (l <= r) {
            int mid = (l + r) / 2;
            if (wm[mid].count == t) {
                cout << wm[mid].num << endl;
                f = 1;
                break;
            }
            if (wm[mid].count > t) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (f == 0) {
            cout << 0 << endl;
        }
        
    }
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
