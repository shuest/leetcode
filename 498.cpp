#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;


class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        if (m == 0) return result;
        int n = matrix[0].size(), index = 0;
        vector<vector<int>> temp(m + n - 1);
        for (int i = 0; i < m; i++, index++) {
            temp[index].push_back(matrix[i][0]);
            for (int x = i, y = 0; x - 1 >= 0 && y + 1 < n; x--, y++)
                temp[index].push_back(matrix[x-1][y+1]);
        }
        for (int j = 1; j < n; j++, index++) {
            temp[index].push_back(matrix[m-1][j]);
            for (int x = m - 1, y = j; x - 1 >= 0 && y + 1 < n; x--, y++)
                temp[index].push_back(matrix[x-1][y+1]);
        }
        for (int i = 0; i < m + n - 1; i++) {
            if (i % 2 == 1) {
                for (int j = temp[i].size() - 1; j >= 0; j--)
                    result.push_back(temp[i][j]);
            } else {
                for (int j = 0; j < temp[i].size(); j++)
                result.push_back(temp[i][j]);
            }
        }
        return result;
    }
};