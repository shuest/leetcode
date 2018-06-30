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


//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//		int sum=0;
//		for(int i=0;i<nums.size();i++)
//		{
//			sum+=nums[i];
//		}
//		if(sum%2!=0)
//			return false;
//		memo=vector<vector<int>> (nums.size(),vector<int>(sum/2+1,-1));
//		return tryPartition(nums,nums.size()-1,sum/2);
//
//    }
//private:
//	vector<vector<int>> memo;//memo[i][c] 用索引[0...i]元素，是否可以填充容量c的背包。-1没计算，0不可以填充，1可以填充
//	bool tryPartition(const vector<int>&nums,int index,int sum)
//	{
//		if(sum==0)
//			return true;
//		if(sum<0||index<0)
//			return false;
//		if(memo[index][sum]!=-1)
//			return memo[index][sum]==1;
//		memo[index][sum]=(tryPartition(nums,index-1,sum)||tryPartition(nums,index-1,sum-nums[index]))?1:0;
//		return memo[index][sum]==1;
//	}
//};

class Solution {
public:
    bool canPartition(vector<int>& nums) {
		int sum=0;
		for(int i=0;i<nums.size();i++)
		{
			sum+=nums[i];
		}
		if(sum%2!=0)
			return false;
		int n=nums.size();
		int c=sum/2;
		vector<bool> memo(c+1,false);
		for(int i=0;i<n;i++)
			memo[i]=(nums[0]==i);
		for(int i=1;i<n;i++)
			for(int j=c;j>=nums[i];j--)
				memo[j]=memo[j]||memo[j-nums[i]];
		return memo[c];

    }
};