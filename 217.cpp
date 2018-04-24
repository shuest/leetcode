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
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
		for(int i=0;i<nums.size();i++)
		{
			if(mp[nums[i]]!=0)
				return true;
			else mp[nums[i]]++;
		}
		return false;
    }
};