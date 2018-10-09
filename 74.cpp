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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int m = matrix.size();
		int n = matrix[0].size();
		int lrow = 0, rrow = m - 1;	//row行
		int lcol = 0, rcol = n - 1; //col列
		int midrow;
		while (lrow <= rrow) {
			midrow = lrow + (rrow - lrow) / 2;
			if(matrix[midrow][0] == target || matrix[midrow][n - 1] == target) {
				return true;
			}
			if(matrix[midrow][0] < target && target < matrix[midrow][n - 1]) //找到行了
				break;
			if(matrix[midrow][0] > target) {
				rrow = midrow - 1;
			}
			else lrow = midrow + 1;
		}
		if(lrow <= rrow) {
			int midcol;
			while(lcol <= rcol) {
				midcol = lcol + (rcol - lcol) / 2;
				if(matrix[midrow][midcol] == target)
					return true;
				if(matrix[midrow][midcol] > target) 
					rcol = midcol - 1;
				else lcol = midcol + 1;
			}
		}
		return false;
    }
};