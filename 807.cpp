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
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
		int m = grid.size(), n = grid[0].size();
		vector<int> colmax(n,0); //ÁÐ
		vector<int> rowmax(m,0); //ÐÐ
		int sum = 0 ,newsum = 0;
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				colmax[j] = max(colmax[j],grid[i][j]);
				rowmax[i] = max(rowmax[i],grid[i][j]);
				sum += grid[i][j];
			}
		}
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				grid[i][j] = min(colmax[j],rowmax[i]);
				newsum += grid[i][j];
			}
		}
		return newsum - sum;
    }
};