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
    int maxAreaOfIsland(vector<vector<int>>& grid) {
		if(grid.size() == 0) return 0;
		n = grid.size(),m = grid[0].size();
		for(int x = 0; x < n; x++) {
			for(int y = 0; y < m; y++) {
				if(grid[x][y] == 1) {
					tempcnt = 0;
					dfs(x,y,grid);
					cnt = max(tempcnt,cnt);
				}
			}
		}
		return cnt;
    }
private:
	int n,m,cnt = 0,tempcnt = 0;
	int arr[5] = {0,1,0,-1,0};
	void dfs(int x,int y, vector<vector<int>> & grid) {
		grid[x][y] = 0;
		tempcnt++;
		for(int i = 0; i < 4; i++) {
			int tx = x + arr[i],ty = y + arr[i + 1];
			if(tx >= 0 && tx < n && ty >= 0 && ty < m && grid[tx][ty] == 1)
				dfs(tx,ty,grid);
		}
	}
};