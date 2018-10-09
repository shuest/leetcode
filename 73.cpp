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
    void setZeroes(vector<vector<int>>& matrix) {
		int m = matrix.size(),n = matrix[0].size();
		vector<int> col,row;
		for(int i = 0; i < m; i++) {
			for(int j = 0; j < n; j++) {
				if(matrix[i][j] == 0) {
					col.push_back(j); //ап
					row.push_back(i);
				}
			}
		}
		while(col.size() != 0) {
			for(int i = 0; i < m; i++) {
				matrix[i][col[col.size() - 1]] = 0;
			}
			col.pop_back();
		}
		while(row.size() != 0) {
			for(int i = 0; i < n; i++) {
				matrix[row[row.size() - 1]][i] = 0;
			}
			row.pop_back();
		}
    }
};