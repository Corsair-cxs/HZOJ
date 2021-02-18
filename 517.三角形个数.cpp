/*************************************************************************
	> File Name: 517.三角形个数.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM08:41:15
 ************************************************************************/

#include <iostream>
using namespace std;

int n;
int n_3, n_2, ans;
int main() {
    cin >> n;
    for (int i = 1; i < n / 3; i++) {
        for (int j = i; j <= (n - i) / 2; j++) {
            int y = n - i - j;
            if (i + j > y) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
