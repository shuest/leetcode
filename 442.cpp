#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		map<int,int> mp;
		vector<int> res;
		for(int i = 1; i < nums.size(); i++) {
			if(nums[i] == nums[i-1])
				mp[nums[i]] = 1;
		}
		for(auto it = mp.begin();it != mp.end(); it++) {
			res.push_back((*it).first);
		}
		return res;
    }
};