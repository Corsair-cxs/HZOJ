/*************************************************************************
	> File Name: 1210.穿过迷宫的最少移动次数.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM05:55:40
 ************************************************************************/

#include <iostream>
using namespace std;

class Solution {
public:
    struct node {
        int x, y, step, mark;// 0-row, 1-colum
    };
    int n, check[105][105][2]; //check末尾2个int判定横向和竖向
    int dir[3][2] = {0, 1, 1, 0, 1, 1};
    //判断点能不能走
    int func(int x, int y, vector<vector<int>> &mmap) {
        if (x == n || y == n) return 0;
        return mmap[x][y] = 0;
    }
    //判断传入蛇尾，判断整条蛇是否合理
    int func2(int x, int y, int mark, vector<vector<int>> &mmap) {
        int x2 = x + dir[mark][0];
        int y2 = y + dir[mark][1];
        return func(x, y, mmap) && func(x2, y2,  mmap);
    }
    //3个方向判定-利于风骚走位
    int func3(int x, int y, vector<vector<int>> &mmap) {
        for (int i = 0; i < 3; i++) {
            int xx = x + dir[i][0];
            int yy = y + dir[i][1];
            if (func(xx, yy, mmap) == 0) return 0;
        }
        return 1;
    }
    int minimumMoves(vector<vector<int>>& grid) {
        n = grid.size();
        queue<node> que;
        que.push((node){0, 0, 0, 0});
        check[0][0][0] = 1;
        while (!que.empty()) {
            node temp = que.front();
            que.pop();
            //蛇尾到达终点，蛇身横着
            if (temp.x == n - 1 && temp.y == n - 2 && temp.mark == 0) {
                return temp.step;
            }
            //下一步可能走的状态-正常走位
            for (int i = 0; i < 2; i++) {
                int x = temp.x + dir[i][0];
                int y = temp.y + dir[i][1];
                if (func2(x, y, temp.mark, grid) && (check[x][y][temp.mark] == 0)) {
                    check[x][y][temp.mark] = 1;
                    que.push((node){x, y, temp.step + 1, temp.mark});
                }
            }
            //下一步可能走的状态-风骚走位
            if (func3(temp.x, temp.y, grid) && (check[temp.x][temp.y][!temp.mark] == 0)) {
                check[temp.x][temp.y][!temp.mark] = 1;
                que.push((node){temp.x, temp.y, temp.step + 1, !temp.mark});
            }
        }
        return -1;
    }
};
