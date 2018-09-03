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
    int minMoves(vector<int>& nums) {
		int minn = INT_MAX;
		for(int i = 0; i < nums.size(); i++) {
			minn = min(minn,nums[i]);
		}
		int cnt = 0;
		for(int i = 0; i <nums.size(); i++) {
			cnt += (nums[i] - minn);
		}
		return cnt;
    }
};