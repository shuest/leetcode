
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

//row行,col列
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
		if(matrix.empty())
			return res;
		int rowbegin=0,rowend=matrix.size()-1,colbegin=0,colend=matrix[0].size()-1;
		while(rowbegin<=rowend&&colbegin<=colend)
		{
			for(int i=colbegin;i<=colend;i++) //左到右
				res.push_back(matrix[rowbegin][i]);
			rowbegin++;
			for(int i=rowbegin;i<=rowend;i++) //上到下
				res.push_back(matrix[i][colend]);
			colend--;
			if(rowbegin<=rowend)
			for(int i=colend;i>=colbegin;i--)	//右往左
				res.push_back(matrix[rowend][i]);
			rowend--;
			if(colbegin<=colend)
			for(int i=rowend;i>=rowbegin;i--)	//下到上
				res.push_back(matrix[i][colbegin]);
			colbegin++;
		}
		return res;
    }
};