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
    int findLengthOfLCIS(vector<int>& nums) {
		int temp = 1,ans = 1;
		if(nums.size() == 0)
			return 0;
		for(int i = 1; i < nums.size(); i++) {
			temp = (nums[i - 1] < nums[i])? temp +1: 1;
			ans = max(ans,temp);
		}
		return ans;
    }
};