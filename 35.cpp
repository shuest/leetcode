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
    int searchInsert(vector<int>& nums, int target) {
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]>=target)
				return i;
			if(i==nums.size()-1)
				return nums.size();
		}
		return 0;
    }
};