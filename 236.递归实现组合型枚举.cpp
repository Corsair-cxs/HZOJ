/*************************************************************************
	> File Name: 236.递归实现组合型枚举.cpp
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Fri 25 Sep 2020 07:26:30 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, ans[20], cnt;

void p() {
    for (int i = 0; i < m; i++) {
        if (i) {
            cout << " ";
        }
        cout << ans[i];
    }
    cout << endl;
}

void func(int s, int left) {
    if (left == 0) {
        p();
        return ;
    }
    for (int i = s; i <= n; i++) {
        ans[cnt++] = i;
        func(i + 1, left - 1);
        cnt--;
    }
}

int main() {
    cin >> n >> m;
    func(1, m);
    return 0;
}
