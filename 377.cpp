
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
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,0);
		dp[0]=1;
		for(int i=1;i<=target;i++)
			for(int j=0;j<nums.size();j++)
				if(i-nums[j]>=0)
					dp[i]+=dp[i-nums[j]];
		return dp[target];
    }
};