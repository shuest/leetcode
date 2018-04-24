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
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> record;
		for(int i=0;i<nums.size();i++)
		{
			if(record.lower_bound((long long)nums[i]-(long long)t)!=record.end()&&*record.lower_bound((long long)nums[i]-(long long)t)<= nums[i]+(long long)t)
					return true;
			record.insert(nums[i]);
			if(record.size()==k+1)
				record.erase(nums[i-k]);
		}
		return false;
    }
};