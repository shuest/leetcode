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
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		int n = nums.size() , m = nums[0].size(); //n––£¨m¡–
		if( n * m != r * c) return nums;
		vector<vector<int>> ans(r,vector<int> (c));
		for(int i = 0; i < r * c; i++) ans[i/c][i%c] = nums[i / m][i % m];
		return ans;
    }
};