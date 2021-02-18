/*************************************************************************
	> File Name: 380.大统领投票.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Wed 21 Oct 2020 09:51:20 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct p_str {
    int num;
    int str_len;
    string str;
};
bool comp(p_str a, p_str b) {
    if (a.str_len == b.str_len) {
        return a.str > b.str;
    }
    return a.str_len > b.str_len;
}

int n;
p_str name[105];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i].str;
        name[i].str_len = name[i].str.size();
        name[i].num = i + 1;
    }
    sort(name, name + n, comp);
    cout << name[0].num << endl << name[0].str << endl;
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 02:12:45 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct p {
    int num;
    string cnt;
};

int n;
p name[105];
bool cmp(p a, p b) {
    if (a.cnt.size() == b.cnt.size()) {
        return a.cnt > b.cnt;
    }
    return a.cnt.size() > b.cnt.size();
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name[i].cnt;
        name[i].num = i + 1;
    }
    sort(name, name + n, cmp);
    cout << name[0].num << endl << name[0].cnt << endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
