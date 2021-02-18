/*************************************************************************
	> File Name: 392.丢瓶盖.cpp
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 06:47:18 PM CST
 ************************************************************************/

#include<iostream>

using namespace std;

int nums[100005], last = 0;
long long threshold, l, r;
int a, b;

int func2(long long threshold) {
    long long last = nums[0], cnt = 0;
    for (int i = 1; i < a; i++) {
        if (nums[i] - nums[last] >= threshold) {
            cnt++;
            last = i;
        }
    }
    return cnt;
}

long long func() {
    long long mid = (l + r + 1) / 2;
    while (l != r) {
        if (func2(mid) < b) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    return r;
}
int main() {
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        cin >> nums[i];
        l = max(l,(long long)(nums[i] - last));
        last = nums[i];
        r += nums[i];
    }
    cout << func() << endl;
    return 0;
}
