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


//找成单出现的
class Solution {
public:
    int singleNumber(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		for(int i=0;i<nums.size()-1;i+=2)
		{
			if(nums[i]!=nums[i+1])
				return nums[i];
		}
		return nums[nums.size()-1];
	}
};