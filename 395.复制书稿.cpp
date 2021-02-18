/*************************************************************************
<<<<<<< HEAD
	> File Name: 395.å¤åˆ¶ä¹¦ç¨¿.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Fri 23 Oct 2020 10:06:00 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int func2(int *num, int n, int goal) {
    int now = 0, cnt = 0;
    for (int i = 1; i < n; i++) {
        if (num[i] + now == goal) {
            now = 0;
            cnt++;
        } else if (num[i] + now > goal) {
            now = num[i];
            cnt++;
        } else {
            now += num[i];
        }
    }
    if(now) cnt++;
    cout << "GOAL: " << goal <<  " \tCNT: " << cnt << endl;
    return cnt;
};
void func(int *num, int n, int goal, int page_l, int page_r) {
    if (goal == n) {
        cout << page_l << endl;
        return ;
    }
    int l = page_l, r = page_r, mid;
    while (l != r) {
        mid = (l + r) / 2;
        int tmp = func2(num, n, mid);
        cout << "L: \t" << l << " \tR: " << r << " \tMID: " << mid << " \tTMP: " << tmp << endl;
        if (tmp == goal) {
            r = mid;   
        } else if (tmp < goal) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << r << endl;
};
int main() {
    int m, k, l = 0x7FFFFFFF, r = 0;
    int num[505];
    cin >> m >> k;
    for (int i = 0; i < m; i++) {
        cin >> num[i];
        l = min(num[i], l);
        r += num[i];
    }
    func(num, m, k, l, r);
    return 0;
=======
	> File Name: 395.¸´ÖÆÊé¸å.cpp
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 08:50:32 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#define min(a, b) (a < b) ? a : b

int m, k, nums[505], sum = 0, tl = 1005, tr;
double threshold;
int stack[505], sp = 0;

int func2(double x) {
	int count = 0, sum = 0, flag = 0;
	for (int i = 1; i <= m; i++) {
		sum += nums[i];
		if (sum + nums[i + 1] > (int)x) {
			sum = 0;
			count++;
		}
	}
	return count;
}

double func() {
	double l = (double)tl, r = (double)tr;
	while (r - l >= 0.00001) {
		double mid = (l + r) / 2;
		if (func2(mid) >= k) {
			l = mid;
		}
		else {
			r = mid;
		}
	}
	return l;
}

int main() {
	cin >> m >> k;
	nums[m + 1] = 0;
	for (int i = 1; i <= m; i++) {
		cin >> nums[i];
		tr += nums[i];
		tl = min(tl, nums[i]);
	}
	threshold = func();
	int threshold_new = (int)(threshold + 0.5);
	int pr = m, pl = m, now_sum;
	for (int i = m - 1, last_sum = nums[m]; i >= 1; i--) {
		pl = i + 1;
		if (last_sum + nums[i] > threshold_new) {
			stack[sp++] = pr;
			stack[sp++] = pl;
			pr = i;
			last_sum = nums[i];
		}
		else {
			last_sum += nums[i];
		}
	}
	pl = 1;
	pr = stack[sp - 1] - 1;
	stack[sp++] = pr;
	stack[sp++] = pl;
	while (sp) {
		cout << stack[sp-1] << " " << stack[sp-2] << endl;
		sp -= 2;
	}

	return 0;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
}
