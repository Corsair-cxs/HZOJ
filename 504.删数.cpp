/*************************************************************************
	> File Name: 504.删数.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM07:35:40
 ************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++) {
        int ind = str.size() - 1;
        for (int j = 0; j < str.size() - 1; j++ ) {
            if (str[j] > str[j + 1]) {
                ind = j;
                break;
            }
        }
        str.replace(ind, 1, "");
    }
    int f = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '0') {
            f = 1;
        }
        if (f) {
            cout << str[i];
        }
    }
    cout << endl;
    return 0;
}
