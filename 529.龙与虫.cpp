/*************************************************************************
	> File Name: 529.龙与虫.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sun 25 Oct 2020 04:38:21 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int n, m, ans, check[140][140] = {0};
char mmap[140][140] = {0};
int dir[8][2] = {
    {1, 0}, {-1, 0}, {0, 1}, {0, -1},
    {1, 1}, {-1, 1}, {1, -1}, {-1, -1}
};
struct node {
    int x, y, step;
};
int func() {
    int g_x, g_y, sx, sy;
    cin >> g_x >> g_y >> sx >> sy;
    if (!g_x) {
       return 0; 
    }    
    memset(check, 0, sizeof(check));
    for (int i = 0; i < 8; i++) {
        for (int j = 0; 1; j++) {
            int row = dir[i][0] * j + g_x;
            int col = dir[i][1] * j + g_y;
            if (mmap[row][col] != 'O') {
                break;
            }
            check[row][col] = 1;
        }
    }
    check[g_x][g_y] = 1;
    queue<node> que;
    que.push((node){sx, sy, 0});
    if (check[sx][sy] == 1) {
        cout << 0 << endl;
        return 1;
    }
    check[sx][sy] = 2;
    while (!que.empty()) {
        node tmp = que.front();
        que.pop();
        for (int i = 0; i < 4; i++) {
            int x = tmp.x + dir[i][0];
            int y = tmp.y + dir[i][1];
            if (check[x][y] == 1) {
                cout << tmp.step + 1 << endl;
                return 1;
            }
            if (check[x][y] != 2 && mmap[x][y] == 'O') {
                check[x][y] = 2;
                que.push((node){x, y, tmp.step + 1});
            }
        }
    }
    cout << "Impossible!" << endl;
    return 1;
};
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
        }
    }
    while (func());
    return 0;
}
