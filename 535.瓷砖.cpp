/*************************************************************************
	> File Name: 535.瓷砖.cpp
<<<<<<< HEAD
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sun 25 Oct 2020 11:43:18 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

char mmap[60][60];
int dir[4][2] = {
    1, 0,
    0, 1,
    -1, 0,
    0, -1
};
int cnt = 0;
int func(int x, int y, int m_cnt) {
    int tx, ty, t_cnt;
    for (int i = 0; i < 4; i++) {
        tx = x + dir[i][0];
        ty = y + dir[i][1];
        if (mmap[tx][ty] == '.') {
            cnt++;
            mmap[tx][ty] = '0';
            t_cnt = func(tx, ty, m_cnt + 1);
            return t_cnt;
        }
    } 
    return m_cnt;
}
int main() {
    int h, w, sx, sy, m_cnt = 0;
    cin >> h >> w;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= h; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '@') {
                sx = i;
                sy = j;
            }
        }
    }
    m_cnt = func(sx, sy, m_cnt);
    m_cnt++;
    cout << m_cnt << endl;
=======
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Fri 25 Sep 2020 08:58:17 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int n, m, ans, sx, sy;
char mmap[55][55];
int dir[4][2] = {
    {0, 1},
    {1, 0},
    {0, -1},
    {-1, 0}
};

void func(int x, int y) {
    for (int i = 0; i < 4; i++) {
        int nx = x + dir[i][0];
        int ny = y + dir[i][1];
        if (mmap[nx][ny] == '.') {
            ans++;
            mmap[nx][ny] = 0;
            func(nx, ny);
        }
    }
}
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mmap[i][j];
            if (mmap[i][j] == '@') {
                sx = i, sy = j;
            }
        }
    }
    func (sx, sy);
    cout << ans + 1 << endl;
>>>>>>> 2fb271d062ecc6f3e245a81259a3a701ac4656c7
    return 0;
}
