/*************************************************************************
	> File Name: 505.最大整数.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM07:16:02
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string str[100005];
bool comp(string a, string b) {
    return a + b > b + a;
}
int main() {
    std::ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str + n, comp);
    for (int i = 0; i < n; i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
