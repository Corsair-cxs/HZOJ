/*************************************************************************
	> File Name: test.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 02 Nov 2020 05:06:53 PM CST
 ************************************************************************/

#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n, num, a[26][26];
    cin >> n;
    int k = n;
    for (int i = 1; i <= n; i++)//行数控制 
    {
        for (int j = i; j <= n; j++) //控制列数 ,填入数字 
        {
            a[i][j] = i;
            a[j][i] = i;
            a[j][n] = i;
            a[n][j] = i;
        }
        n--;//n--将矩阵向中心收缩 
    }
    //输出矩阵 
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++) {
            if (j > 1) {
                cout << " ";
            }
            cout << a[i][j];
        }
        cout<<endl; 
    }
    return 0;
}
