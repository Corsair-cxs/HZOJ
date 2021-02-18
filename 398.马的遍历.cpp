/*************************************************************************
	> File Name: 398.马的遍历.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Oct  9 11:11:24 2020
 ************************************************************************/

#include<iostream>
#include<queue>

using namespace std;

struct node {
    itn x, y, step;
};

int dir[8][2] = {
    {1, 2}, {2, 1}, 
    {2, -1}, {1, -2}, 
    {-1, -2}, {-2, -1}, 
    {-2, 1}, {-1, 2}
};

int n, m, ans[405][405], sx, sy;

int main() {
    cin >> n >> m >> sx >> sy;
    queue<node> que;
    que.push((node){sx, sy, 0});
    while (!que.empty()) {
        node temp = que.front();
        que.pop();
        for (int i = 0; i < 8; i++) {
            int x = temp.x + dir[i][0];
            int y = temp.y + dir[i][1];
            if (x < 1 || y < 1 || x > n || y > m || ans[x][y]) {
                continue;
            }
            ans[x][y] = temp.step + 1;
            que.push((node){x, y, ans[x][y]});
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (j != 1) {
                cout << " ";
            }
            if (i == sx && j == sy) {
                cout << 0;
            } else if (ans[i][j] == 0) {
                cout << -1;
            } else {
                cout << ans[i][j];
            }
        }
    }
    return 0;
}
