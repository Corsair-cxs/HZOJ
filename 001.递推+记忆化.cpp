/*************************************************************************
	> File Name: 1.递推+记忆化.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM06:51:03
 ************************************************************************/

#include <iostream>
using namespace std;

int fib[50] = {1, 1, 2};

int func(int n) {
    if (fib[n] != 0) {
        return fib[n];
    }
    return fib[n] = func(n - 1) + func(n - 2);
}

int main() {
    int m;
    cin >> m;
    cout << func(m - 1) << endl;

    return 0;
}
