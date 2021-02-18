/*************************************************************************
	> File Name: 235.递归实现指数型枚举.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sat 24 Oct 2020 11:48:35 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

void p(int *ans, int cnt) {
    for (int i = 0; i < cnt; i++) {
        if (i) {
            cout << ' ';
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Fri 25 Sep 2020 06:47:36 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, ans[15], cnt;
void p() {
    for (int i = 0; i < cnt; i++) {
        if (i != 0) {
            cout << " ";
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
        }
        cout << ans[i];
    }
    cout << endl;
<<<<<<< HEAD
};
void func(int *ans, int cnt, int start, int end_n) {
    if (start > end_n) {
        return;
    }
    int tmp_cnt = cnt;
    for (int i = start; i <= end_n; i++) {
        ans[tmp_cnt++] = i;
        p(ans, tmp_cnt);
        func(ans, tmp_cnt, i + 1, end_n);
        tmp_cnt--;
    }
};
int main() {
    int ans[60], cnt = 0, n;
    cin >> n;
    func(ans, cnt, 1, n);
=======
}
void func(int s) {
    if (s > n) {
        return ;
    }
    for (int i = s; i <= n; i++) {
        ans[cnt++] = i;
        p();
        func(i + 1);
        cnt--;
    }
}
int main() {
    cin >> n;
    func(1);
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
