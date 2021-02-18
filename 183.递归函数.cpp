/*************************************************************************
	> File Name: 183.递归函数.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 26 Oct 2020 11:10:48 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

long long func(int x) {
    if (x <= 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    if (x % 2 == 0) {
        return (3 * func(x / 2) - 1);
    }
    return (3 * func((x + 1) / 2) - 1);
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}
