/*************************************************************************
	> File Name: 388.奇怪的刮刮乐.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 11:03:42 AM CST
 ************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;
int n, m;
bool flag = false;
long long sum = 0;
int nums_m[100005];
int nums_n[100005];

bool comp(int a, int b) {
    return a < b;
};
void func (int goal) {
    int l = 0, r = n - 1, mid;
    while (l <= r) {
        mid = (l + r) / 2;
        if (nums_n[mid] == goal) {
            if (!flag) {
                flag = !flag;
            } else {
                cout << " ";
            }
            cout << goal;
            sum += goal;
            return ;
        }
        if (nums_n[mid] < goal) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
};
int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> nums_m[i];
    }    
    for (int i = 0; i < n; i++) {
        cin >> nums_n[i];
    }
    sort(nums_n, nums_n + n, comp);
    for (int i = 0; i < m; i++) {
        func(nums_m[i]);
    }
    cout << endl << sum << endl;
    return 0;
}
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 03:13:06 PM CST
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

bool comp(int a, int b) {
    return a < b;
}

int m, n;
int nums[100005]; 
long long all;

int main() {
    std::ios::sync_with_stdio(false);
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + m, comp);
    for (int i = 0; i < n; i++) {
        int t, l = 0, r = m - 1;
        cin >> t;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == t) {
                all += t;
                cout << t << ' ';
            }
            if (nums[mid] > t) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    cout << endl << all;
    return 0;
}

>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
