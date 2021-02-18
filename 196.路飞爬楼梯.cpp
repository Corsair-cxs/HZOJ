/*************************************************************************
	> File Name: 196.路飞爬楼梯.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 26 Oct 2020 11:33:16 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int ans;
int func(int n) {
    if (n < 2) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    return func(n - 2) + func(n - 3);
    
}
int main() {
    int n, ans;
    cin >> n;
    ans = func(n);
    cout << ans << endl;
    return 0;
}
