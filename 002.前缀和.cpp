/*************************************************************************
	> File Name: 2.前缀和.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM07:10:03
 ************************************************************************/

#include <iostream>
using namespace std;

int n, num[30], sum[30];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + num[i];
    }
    for (int i = 0; i < 5; i++) {
        int a, b;
        cin >> a >> b;
        cout << sum[a] - sum[a - 1] << endl;
    }
    
    return 0;
}
