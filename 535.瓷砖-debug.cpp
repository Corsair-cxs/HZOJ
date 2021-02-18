/*************************************************************************
	> File Name: 535.瓷砖.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sun 25 Oct 2020 11:43:18 AM CST
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
    cout << endl << x << " \t" << y << endl;
    cout << endl << "---------" << endl;
    for (int i = 0; i < 4; i++) {
        int nx = x + dir[i][0];
        int ny = y + dir[i][1];
        cout << nx << " \t" << ny << endl;
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
    return 0;
}

