#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int l=0,r=-1; //nums[l,r]
		int sum=0;
		int res=nums.size()+1;//大值
		while(l<nums.size())
		{
			if(r +1<nums.size()&&sum<s)
			{
				r++;
				sum+=nums[r];
			}
			else
			{
				sum-=nums[l];
				l++;
			}
			if(sum>=s)	//找到
			{
				res=min(res,r-l+1);
			}
		}
		if(res==nums.size()+1)
			return 0;	//没找到
		else return res;
    }
};