/*************************************************************************
	> File Name: 446.回形方阵.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 02 Nov 2020 11:03:49 AM CST
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

char num[12][12];
int main() {
    int n;
    memset(num, '1', sizeof(num[0]) * sizeof(num));
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << num[i][j];
        }
        cout << endl;
    }
    return 0;
}
