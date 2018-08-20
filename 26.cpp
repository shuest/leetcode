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
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
			return 0;
		int len=1;
		for(int i=1;i<nums.size();i++)
		{
			if(nums[i]!=nums[i-1])
				nums[len++]=nums[i];
		}
		return len;
    }
};