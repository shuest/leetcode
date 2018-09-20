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
    int deleteAndEarn(vector<int>& nums) {
		int n = nums.size();
		if(n == 0) return 0;
		vector<int> cnt(10001,0),dp(10001,0);
		for(int i = 0; i < nums.size(); i++) { 
			cnt[nums[i]]++;
		}
		dp[1] = cnt[1];
		for(int i = 2; i < 10001; i++) {
			dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);
		}
		return dp[10000];
    }
};