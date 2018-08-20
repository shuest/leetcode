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
    int firstMissingPositive(vector<int>& nums) {
		int n=nums.size();
		for(int i=0;i<n;i++)
		{
			if(nums[i]!=i+1)
				if(nums[i]<=n&&nums[i]>=1&&nums[nums[i]-1]!=nums[i])
				{//正数在范围内，且该位上数所该呆的位置上的数是错的
					swap(nums[i],nums[nums[i]-1]);//将该位上的数归位到正确位置,但该位上的数还是不对的
					i--;
				}
		}
		for(int i=0;i<n;i++)
		{
			if(nums[i]!=i+1)
				return i+1;
		}
		return n+1;
    }
};