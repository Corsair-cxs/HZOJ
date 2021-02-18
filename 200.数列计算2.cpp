/*************************************************************************
	> File Name: 200.数列计算2.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 02 Nov 2020 10:27:28 AM CST
 ************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int nums[50] = {0, 4, 7, 11};
double sum[50] = {0.0};
int main() {
    int n;
    sum[1] = (double)nums[1] / nums[2];
    sum[2] = sum[1] + ((double)nums[2]/ nums[3]);
    cin >> n;
    for (int i = 3; i <= n; i++) {
        nums[i + 1] = nums[i] + nums[i - 1];
        sum[i] = sum[i - 1] + ((double)nums[i] / nums[i + 1]);
    }
    cout << nums[n] << "/" << nums[n + 1] << endl;
    printf("%.2lf\n", sum[n]);
    return 0;
}
