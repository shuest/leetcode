

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

//
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int S) {
//		int sum=0;
//		for(int i=0;i<nums.size();i++)
//			sum+=nums[i];
//		if(sum<abs(S))
//			return 0;
//		int ans=0;
//		dfs(nums,0,S,ans);
//		return ans;
//    }
//private:
//	void dfs(const vector<int>& nums,int d,int S,int &ans)
//	{		//d是到第几个了
//		if(d==nums.size())	//到头
//		{
//			if(S==0)	//解的个数+1
//				ans++;
//			return;
//		}
//		dfs(nums,d+1,S-nums[d],ans);	//+
//		dfs(nums,d+1,S+nums[d],ans);	//-
//	}
//};


class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
		int sum=0;
		for(int i=0;i<nums.size();i++)
			sum+=nums[i];
		if(sum<S||(S+sum)%2!=0)
			return 0;
		sum=(S+sum)/2;
		vector<int> dp(sum+1,0);
		dp[0]=1;
		for(int i=0;i<nums.size();i++)
			for(int j=sum;j>=nums[i];j--)
				dp[j]+=dp[j-nums[i]];
		return dp[sum];
	}
};