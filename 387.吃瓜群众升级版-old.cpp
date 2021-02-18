/*************************************************************************
	> File Name: 386.吃瓜群众.cpp
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
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        wm[i].num = i + 1;
        cin >> wm[i].count;
    }
    wm[n].num = 0;
    wm[n].count = 1000000001;
    sort(wm, wm + n, cmp);
    for(int i = 0; i < m; i++) {
        int t, l = 0, r = n;
        cin >> t;
        while (l != r) {
            int mid = (l + r) / 2;
            if (wm[mid].count >= t) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        cout << wm[l].num << endl;
        
    }
    return 0;
}

