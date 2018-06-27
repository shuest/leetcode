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
public:
    void solveSudoku(vector<vector<char>>& board) {
		//记录某一行的某数字值是否被使用（非位置）
        rows=vector<vector<int>> (9,vector<int>(10));//行
		cols=vector<vector<int>> (9,vector<int>(10));//列
		boxes=vector<vector<int>> (9,vector<int>(10));
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)
			{
				char c=board[i][j];
				if(c!='.')
				{
					int n=c-'0';
					int blie=j/3;//横格子数 j列用过了
					int bhang=i/3;//i行用过了
					rows[i][n]=1;
					cols[j][n]=1;
					boxes[bhang*3+blie][n]=1;
				}
			}
			fill(board,0,0);
    }
private:
	vector<vector<int>> rows,cols,boxes;
	bool fill(vector<vector<char>>&board,int x,int y)
	{	//从0道8
		if(y==9)
			return true;
		int nx=(x+1)%9;	//下一个坐标
		int ny=(nx==0)?y+1:y;	//进位加一
		if(board[y][x]!='.') return fill(board,nx,ny);
		for(int i=1;i<=9;i++)
		{
			int blie=x/3;
			int bhang=y/3;
			int box_key=bhang*3+blie;
			if(!rows[y][i]&&!cols[x][i]&&!boxes[box_key][i])
			{
				rows[y][i]=1;
				cols[x][i]=1;
				boxes[box_key][i]=1;
				board[y][x]=i+'0';//填数
				if(fill(board,nx,ny)) return true;
				rows[y][i]=0;
				cols[x][i]=0;
				boxes[box_key][i]=0;
				board[y][x]='.';
			}
		}
		return false;
	}
};
