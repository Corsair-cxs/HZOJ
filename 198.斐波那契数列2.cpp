/*************************************************************************
	> File Name: 198.斐波那契数列2.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 26 Oct 2020 11:41:49 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int num[100005] = {0};
int func(int n) {
    num[1] = num[2] = 1;
    for (int i = 3; i <= n; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= 1000000007;
    }
    return num[n];
}
int main() {
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}
