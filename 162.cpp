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
    int findPeakElement(vector<int>& nums) {
		if(nums.size()==1||(nums[0]>nums[1]))
			return 0;
		if(nums[nums.size()-1]>nums[nums.size()-2]) //最后一个
			return nums.size()-1;
		for(int i=1;i<nums.size()-1;i++)
		{
			if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
				return i;
		}
    }
};