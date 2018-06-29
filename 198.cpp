
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
    int rob(vector<int>& nums) {
		memo=vector<int> (nums.size(),-1);
        return tryRob(nums,0);
    }
private:
	vector<int> memo;	//收益
	int tryRob(vector<int> &nums,int index)
	{
		if(index>=nums.size())
			return 0;
		if(memo[index]!=-1)	//去重
			return memo[index];
		int res=0;
		for(int i=index;i<nums.size();i++)
			res=max(res,nums[i]+tryRob(nums,i+2));
		memo[index]=res;
		return res;
	}
};
