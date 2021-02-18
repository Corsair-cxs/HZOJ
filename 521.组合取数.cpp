/*************************************************************************
	> File Name: 521.组合取数.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Thu 29 Oct 2020 10:01:41 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int ans = 0;
bool is_prime(int n) {
    int sq_n = (int) sqrt(n);
    for (int i = 2; i <= sq_n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
};

void func2(vector<int> &v) {
    int n = 0;
    for (int i = 0; i < v.size(); i++) {
        n += v[i];
    }
    if (is_prime(n)) {
        ans++;
        //cout << "N: " << n << endl;
    }
};
void func(int *nums, vector<int> &v, int n, int k, int start) {
    if (k == 0) {
        func2(v);
        return ;
    }
    for (int i = start; i <= n - k + 1; i++) {
        v.push_back(nums[i]);
        func(nums, v, n, k - 1, i + 1);
        v.pop_back();
    }
};

int main() {
    int n, r;
    int nums[50] = {0};
    vector<int> v;
    cin >> n >> r;
    for (int i = 1; i <= n; i++) {
        cin >> nums[i];
    }
    func(nums, v, n, r, 1);
    cout << ans << endl;
    return 0;
}
