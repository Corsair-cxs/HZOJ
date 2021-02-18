/*************************************************************************
	> File Name: 3.重复字符的最长子串.cpp
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Sun 01 Nov 2020 10:41:42 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() <= 1) {
            return s.size();
        }
        unordered_set<char> lookup;
        return 0;
    }
};

int main() {
    Solution solution;
    string s;
    cin >> s;
    int n = solution.lengthOfLongestSubstring(s);
    cout << n << endl;
    return 0;
}
