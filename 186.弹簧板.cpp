/*************************************************************************
	> File Name: 186.弹簧板.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 26 Oct 2020 11:24:10 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int num[100005];
int func(int st, int len) {
    if (num[st] + st > len) {
        return 1;
    }
    return func(st + num[st], len) + 1;
}
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    int ans = func(1, n);
    cout << ans << endl;
    return 0;
}
