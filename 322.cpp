#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cctype>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,INT_MAX);//大小，初始值
		dp[0]=0;
		for(int i=0;i<coins.size();i++)
		{
			for(int j=coins[i];j<=amount;j++)
				if(dp[j-coins[i]]!=INT_MAX)
					dp[j]=min(dp[j-coins[i]]+1,dp[j]);
		}
		return dp[amount]==INT_MAX?-1:dp[amount];
    }
};