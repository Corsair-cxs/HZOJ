/*************************************************************************
	> File Name: 184.路飞吃桃.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 26 Oct 2020 11:06:24 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int func(int n) {
    if (n == 1) {
        return 1;
    } 
    return (2 * (func(n - 1) + 1));
};
int main() {
    int n;
    cin >>  n;
    cout << func(n) << endl;

    return 0;
}
