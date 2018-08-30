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
		for(int i = 0; i < matrix.size(); i++) {
			if(binary_search(matrix[i].begin(), matrix[i].end(), target))
				return true;
		}
		return false;
    }
};