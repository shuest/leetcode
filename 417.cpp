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
	int m,n;
	vector<vector<bool>>rpo;
	vector<vector<int>> v4po;
	vector<vector<bool>>rao;
	vector<vector<int>>v4ao;
	
	void visitForPacificOcean(vector<vector<int>>&matrix,int x,int y,int lastHeight)
	{
		if(x>=0&&x<m&&y>=0&&y<n&&v4po[x][y]==0&&matrix[x][y]>=lastHeight)
		{
			rpo[x][y]=true;
			v4po[x][y]=1;
			visitForPacificOcean(matrix,x-1,y,matrix[x][y]);
			visitForPacificOcean(matrix,x,y+1,matrix[x][y]);
			visitForPacificOcean(matrix,x+1,y,matrix[x][y]);
			visitForPacificOcean(matrix,x,y-1,matrix[x][y]);
		}
	}
	void visitForAtlanticOcean(vector<vector<int>>&matrix,int x,int y,int lastHeight)
	{
		if(x>=0&&x<m&&y>=0&&y<n&&v4ao[x][y]==0&&matrix[x][y]>=lastHeight)
		{
			rao[x][y]=true;
			v4ao[x][y]=1;
			visitForAtlanticOcean(matrix,x-1,y,matrix[x][y]);
			visitForAtlanticOcean(matrix,x,y+1,matrix[x][y]);
			visitForAtlanticOcean(matrix,x+1,y,matrix[x][y]);
			visitForAtlanticOcean(matrix,x,y-1,matrix[x][y]);
		}
	}
public:
    vector<pair<int, int>> pacificAtlantic(vector<vector<int>>& matrix) {
		m=matrix.size();
		n=matrix[0].size();
		vector<pair<int, int>> res;
		if(m==0) return res;
		rpo=vector<vector<bool>>(m,vector<bool>(n,false));
		v4po=vector<vector<int>>(m,vector<int>(n,0));
		rao=vector<vector<bool>>(m,vector<bool>(n,false));
		v4ao=vector<vector<int>>(m,vector<int>(n,0));
		for(int i=0;i<m;i++)
		{
			visitForPacificOcean(matrix,i,0,0);  //竖着的两个
			visitForAtlanticOcean(matrix,i,n-1,0);
		}
		for(int i=0;i<n;i++)
		{
			visitForPacificOcean(matrix,0,i,0);		//横着的两个
			visitForAtlanticOcean(matrix,m-1,i,0);
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(rpo[i][j]&&rao[i][j])
				{
					res.push_back(make_pair(i,j));
				}
			}
		}
		return res;
    }
};