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
//
//
//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//		if(matrix.size()== 0) return false;
//		int m = matrix.size();
//		if(matrix[0].size()== 0) return false;
//		int n = matrix[0].size();
//		if(n == 1) {
//			int left =0, right = m - 1,mid;
//			while(left <= right) {
//				mid = (left + right) /2;
//				if(target == matrix[mid][0])
//					return true;
//				if(matrix[mid][0] > target)
//					right = mid - 1;
//				else left = mid + 1;
//			}
//			return false;
//		}
//		int midrow;
//		int lrow = 0, rrow = m - 1; //ÐÐ
//		int lcol = 0, rcol = n - 1;//ÁÐ
//		while(lrow <= rrow) {
//			 midrow = lrow + (rrow - lrow)>>1;
//			if(matrix[midrow][0] == target||matrix[midrow][n - 1] == target)
//				return true;
//			if(matrix[midrow][0] < target && matrix[midrow][n -1] > target){
//				while(lcol <= rcol) {
//					int midcol = lcol + (rcol - lcol)/2;
//					if(matrix[midrow][midcol] == target)
//						return true;
//					if(matrix[midrow][midcol] > target) 
//						rcol = midcol - 1;
//					else lcol = midcol + 1;
//		         }
//				return false;
//			}
//			if(matrix[midrow][0] > target && matrix[midrow][n - 1] > target) 
//				rrow = midrow - 1;
//			else if(matrix[midrow][n - 1] < target && matrix[midrow][0] < target)
//				lrow = midrow + 1;
//		}
//		
//			
//		return false;
//		
//    }
//};


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
		if(matrix.size()== 0) return false;
		int m = matrix.size();
		if(matrix[0].size()== 0) return false;
		int n = matrix[0].size();
		int size = m * n,mid;
		int left = 0, right = size - 1;
		while(left <= right) {
			mid = (left + right) / 2;
			int col = mid % n;
			int row = mid / n;
			if(matrix[row][col] == target) return true;
			if(matrix[row][col] > target)
				right = mid -1;
			else left = mid + 1;
				
		}
		return false;
    }
};