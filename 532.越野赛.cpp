/*************************************************************************
	> File Name: 532.越野赛.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM06:03:52
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

struct node {
    int x, y;
};

int n, m, num[505][505], cp[505][505], cnt, sx, sy, sr;
int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};

int bfs(int dis) {
    queue<node> que;
    int check[505][505] = {0}, nowcp = 1;
    que.push((node){sx, sy});
    check[sx][sy] = 1;
    cout << "------------" << endl;
    cout << "sx:\t" << sx << "\t" << "sy:\t" << sy << endl;
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        cout << "TX:\t" << temp.x << "\t" << "TY:\t" << temp.y << endl;
        for (int i = 0; i < 4; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > n || check[x][y] == 1) {
                continue;
            }
            cout << "X:\t" << x << "\t" << "Y:\t" << y << endl;
            if (abs(num[x][y] - num[temp.x][temp.y]) <= dis) {
                cout << "dis: " << dis << endl;
                cout << "now: " << abs(num[x][y] - num[temp.x][temp.y]) << endl;
                check[x][y] = 1;
                que.push((node){x, y});
                if (cp[x][y] == 1) {
                    nowcp++;
                    cout << nowcp << "--------";
                    cout << endl;
                }
            }
        }
    }
    return (nowcp == cnt);
}

int bin_search() {
    int l = 0, r = sr;
    while (l != r) {
        int mid = (l +r) / 2;
        cout << mid << endl;
        if (bfs(mid)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> num[i][j];
            sr = max(sr, num[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> cp[i][j];
            if (cp[i][j] == 1) {
                cnt++;
                sx = i, sy = j;
            }
        }
    }
    cout << bin_search() << endl;
    return 0;
}
