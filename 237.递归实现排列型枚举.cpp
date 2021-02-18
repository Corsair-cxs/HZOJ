/*************************************************************************
	> File Name: 237.递归实现排列型枚举.cpp
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Fri 25 Sep 2020 07:37:26 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, ans[10], cnt, check[10];

void p() {
    for (int i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;
}

void func(int left) {
    if (left == 0) {
        p();
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            check[i] = 1;
            ans[cnt++] = i;
            func(left - 1);
            cnt--;
            check[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    func(n);

    return 0;
}
