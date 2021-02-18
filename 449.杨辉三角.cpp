/*************************************************************************
	> File Name: 449.杨辉三角.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 02 Nov 2020 10:42:43 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int num[40][40] = {0};

void func(int n) {
    if (n == 1) {
        num[1][1] = 1;
        return ;
    }
    func(n - 1);
    for (int i = 1; i <= n; i++) {
        num[n][i] = num[n - 1][i - 1] + num[n - 1][i]; 
    }
    return ;
}
void p(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) {
                cout << " ";
            }
            cout << num[i][j];
        }
        cout << endl;
    }
    return ;
}
int main() {
    int n;
    cin >> n;
    func(n);
    p(n);
    return 0;
}
