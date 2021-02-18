/*************************************************************************
	> File Name: 486.铺瓷砖.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 30 Oct 2020 12:04:55 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;


long long nums[1005] = {0, 1, 3, 5};
int main() {
    int n;
    cin >> n;
    int flag = 1;
    for (int i = 4; i <= n; i++) {
        nums[i] = nums[i - 1] * 2 + flag;
        nums[i] %= 12345;
        flag *= -1;
    }
    cout << nums[n] << endl;

    return 0;
}
