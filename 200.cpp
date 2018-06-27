#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
using namespace std;

class Solution {
private:
	int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	int m,n;
	vector<vector<bool>>visited;
	bool inArea(int x,int y)
	{
		return x>=0&&y>=0&&x<m&&y<n;
	}

public:
    int numIslands(vector<vector<char>>& grid) {
		m=grid.size();
		if(m==0)
			return 0;
		n=grid[0].size();
		visited=vector<vector<bool>>(m,vector<bool>(n,false));
		int res = 0;
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
			{
				if(grid[i][j]=='1'&&visited[i][j]==false)
				{
					dfs(grid,i,j);
					res++;
				}
			}
		return res;
    }
	void dfs(vector<vector<char>>& grid,int x,int y)
	{
		visited[x][y]=true;
		for(int i=0;i<4;i++)
		{
			int newx=x+d[i][0];
			int newy=y+d[i][1];
			if(inArea(newx,newy)&&visited[newx][newy]==false&&grid[newx][newy]=='1')
				dfs(grid,newx,newy);
		}
		return;
	}
};