/*************************************************************************
	> File Name: 237.递归实现排列型枚举.cpp
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Fri 25 Sep 2020 07:37:26 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, ans[10], check[10];

void p() {
    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;
}

void func(int f) {
    if (f == n + 1) {
        p();
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            check[i] = 1;
            ans[f] = i;
            func(f + 1);
            check[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    func(1);
    return 0;
}
