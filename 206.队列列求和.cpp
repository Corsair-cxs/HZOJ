/*************************************************************************
	> File Name: 206.队列列求和.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 02 Nov 2020 10:57:52 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double sum[50] = {0};
    double col[50] = {0};
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> col[j];
            sum[j] += col[j];
        }
    }
    for (int i = 0; i < m; i++) {
        cout << sum[i] << endl;
    }
    return 0;
}
