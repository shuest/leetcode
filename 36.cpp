#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int book[10];
		memset(book,0,sizeof(int)*10);
		//每一列
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				if(board[i][j]=='.') continue;
				if(book[board[i][j]-'0']==0)
					book[board[i][j]-'0']=1;
				else return false;
				//每个只能出现一次，多次出现的是错的
			}
			memset(book,0,sizeof(int)*10);
		}
		//每一行
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				if(board[j][i]=='.') continue;
				if(book[board[j][i]-'0']==0)
					book[board[j][i]-'0']=1;
				else return false;
			}
			memset(book,0,sizeof(int)*10);
		}
		for(int m=0;m<=6;m+=3)
		{
			for(int i=0;i<=8;i++)
			{
				if(i%3==0)
					memset(book,0,sizeof(int)*10);
				for(int j=0;j<=2;j++)
				{
					if(board[i][j+m]=='.') continue;
					if(book[board[i][j+m]-'0']==0)
						book[board[i][j+m]-'0']=1;
					else return false;
				}
			}
		}
		return true;
    }
};