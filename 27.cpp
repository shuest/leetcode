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
    int removeElement(vector<int>& nums, int val) {
		int len=0;
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i]!=val)
				nums[len++]=nums[i];
		}
		return len;
    }
};