/*************************************************************************
	> File Name: 240.图形打印四.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sat 24 Oct 2020 10:19:45 AM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define LEN 1024
char ans[1024][1024] = {0};
int num[10] = {0, 1, 3, 9, 27, 81, 243, 729};
void func(int x, int y, int n) {
    if (n == 1) {
        ans[x][y] = 'X';
        return;
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Fri 25 Sep 2020 06:19:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

char ans[1005][1005];
int num[10] = {0, 1, 3, 9, 27, 81, 243, 729};
int t;
void func(int x, int y, int n) {
    if (n == 1) {
        ans[x][y] = 'X';
        return ;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    }
    func(x, y, n - 1);
    func(x, y + num[n] / 3 * 2, n - 1);
    func(x + num[n] / 3, y + num[n] / 3, n - 1);
    func(x + num[n] / 3 * 2, y, n - 1);
    func(x + num[n] / 3 * 2, y + num[n] / 3 * 2, n - 1);
<<<<<<< HEAD
};

int main() {
    func(1, 1, 7);
    int n;
    while (cin >> n) {
        if (n == -1) {
            break;
        }
        for (int i = 1; i <= num[n]; i++) {
            for (int j = 1; j <= num[n]; j++) {
                
                if (ans[i][j] == 'X') {
                    cout << 'X';        
                } else {
                    cout << ' ';
                }
                
                //cout << ans[i][j];
            }
            cout << endl;
        }
        cout << "-" << endl;
=======
}
int main() {
    func(1,1,7);
    while(cin >> t) {
        if(t == -1) {
            break;
        }
        for (int i = 1; i <= num[t]; i++) {
            for (int j = 1; j <= num[t]; j++) {
                if (ans[i][j] == 'X') {
                    cout << 'X';
                } else {
                    cout << ' ';
                }
            }
            cout << endl;
        }
        cout << '-' << endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    }
    return 0;
}
