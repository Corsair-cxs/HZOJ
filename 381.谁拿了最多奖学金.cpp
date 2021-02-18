/*************************************************************************
	> File Name: 381.谁拿了最多奖学金.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Wed 21 Oct 2020 10:19:48 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

struct max_stu {
    string name;
    int num;
};

int main() {
    max_stu Max_stu;
    Max_stu.num = -1;
    int n;
    string name;
    int score_avg, class_com, paper_cnt, money, sum_money = 0;
    char stu_carde, stu_west;
    cin >> n;
    while (n--) {
        money = 0;
        cin >> name >> score_avg >> class_com >> stu_carde >> stu_west >> paper_cnt;
        if (score_avg > 80 && paper_cnt > 0) {
            money += 8000;
        }
        if (score_avg > 85 && class_com > 80) {
            money += 4000;
        }
        if (score_avg > 90) {
            money += 2000;
        }
        if (score_avg > 85 && stu_west == 'Y') {
            money += 1000;
        }
        if (class_com > 80 && stu_carde == 'Y') {
            money += 850;
        }
        sum_money += money;
        if (money > Max_stu.num) {
            Max_stu.name = name;
            Max_stu.num = money;
        }
        //cout << n << ": " << money  << " SUM: " << sum_money << endl;
    }
    cout << Max_stu.name << endl << Max_stu.num << endl << sum_money << endl;
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 20 Sep 2020 02:22:28 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct STU {
    string name;
    int L_score;
    int C_score;
    int off;
    int west;
    int paper;
    int all;
    int num;
};

int n, ans;
STU stu[100];

int func(int x) {
    if (stu[x].L_score > 80 && stu[x].paper > 0) {
        stu[x].all += 8000;
    }
    if (stu[x].L_score > 85 && stu[x].C_score > 80) {
        stu[x].all += 4000;
    }
    if (stu[x].L_score > 90) {
        stu[x].all += 2000;
    }
    if (stu[x].L_score > 85 && stu[x].west) {
        stu[x].all += 1000;
    }
    if (stu[x].C_score > 80 && stu[x].off) {
        stu[x].all += 850;
    }
    return stu[x].all;
}

bool cmp(STU a, STU b) {
    if (a.all == b.all) {
        return a.num < b.num;
    }
    return a.all > b.all;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        stu[i].num = i;
        cin >> stu[i].name >> stu[i].L_score >> stu[i].C_score;
        char t;
        cin >> t;
        stu[i].off = (t == 'Y') ? 1 : 0;
        cin >> t;
        stu[i].west = (t == 'Y') ? 1 : 0;
        cin >> stu[i].paper;
        ans += func(i);
    }
    sort(stu, stu + n, cmp);
    cout << stu[0].name << endl << stu[0].all << endl << ans << endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
