/*************************************************************************
	> File Name: 909.蛇梯棋.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sunday, October 18, 2020 PM02:12:45
 ************************************************************************/
//https://leetcode-cn.com/problems/snakes-and-ladders/
//
#include <iostream>
using namespace std;

class Solution {
public:
    struct node {
        int now, step;
    };
    int n, num[410], check[410], cnt = 1;
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        for (int i = n - 1; i >= 0; i--) {
            if ((n - i) % 2 == 1) {
                for (int j = 0; j < n; j++) {
                    num[cnt++] = board[i][j];
                }
            } else {
                for (int j = n - 1; j >= 0; j--) {
                    num[cnt++] = board[i][j];
                }
            }
        }
        queue<node> que;
        que.push((node){1, 0});
        check[1] = 1;
        while (!que.empty()) {
            node temp = que.front();
            que.pop();
            for (int i = 1; i <= 6; i++) {
                int t = temp.now + i;
                if (num[t] != -1) {
                    t = num[t];
                }
                if (t == n * n) {
                    return temp.step + 1;
                }
                if (t < n * n && check[t] == 0) {
                    check[t] = 1;
                    que.push((node){t, temp.step + 1});
                }
            }
        }
        return -1;
    }
};
int main() {



    return 0;
}
