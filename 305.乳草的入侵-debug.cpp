/*************************************************************************
	> File Name: 305.乳草的入侵.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sun 25 Oct 2020 03:35:59 PM CST
 ************************************************************************/

#include <iostream>
#include <queue>
using namespace std;
struct node {
    int x, y, step;
};
int dir[8][2] = {
    {0, 1}, {0, -1},
    {1, 1}, {1, 0}, {1, -1},
    {-1, 1}, {-1, 0}, {-1, -1}
};
int X, Y, Mx, My, cnt;
char mmap[128][128];
queue<node> que;

void func() {
    int sstep;
    while (!que.empty()) {
        node tmp = que.front();
        cout << endl << "---------" << endl;
        cout << tmp.x << "\t" << tmp.y << "\t" << tmp.step << endl;
        sstep = tmp.step;
        que.pop();
        for (int i = 0; i < 8; i++) {
            int xx = tmp.x + dir[i][0];
            int yy = tmp.y + dir[i][1];
            if (mmap[xx][yy] == '.') {
                que.push((node){xx, yy, sstep + 1});
                mmap[xx][yy] = 'Q';
            }         
        }
        for (int i = 1; i <= Y; i++) {
            for (int j = 1; j <= X; j++) {
                cout << mmap[i][j];
            }
            cout << endl;
        }
    }
    cout << sstep << endl;
}
int main() {
    int sx, sy;
    cin >> X >> Y >> Mx >> My;
    sx = Mx;
    sy = Y + 1 - My;
    for (int i = 1; i <= Y; i++) {
        for (int j = 1; j <= X; j++) {
            cin >> mmap[i][j];
        }
    }
    mmap[sy][sx] = 'M';
    que.push((node){sy, sx, 0});
    func();
    for (int i = 1; i <= Y; i++) {
        for (int j = 1; j <= X; j++) {
            cout << mmap[i][j];
        }
        cout << endl;
    }
    return 0;
}
