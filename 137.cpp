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
    int singleNumber(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		for(int i=0;i<nums.size()-4;i=i+3)
			if(nums[i]!=nums[i+2])
				return nums[i];
		return nums[nums.size()-1];
    }
};