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
    bool increasingTriplet(vector<int>& nums) {
		if(nums.size() < 3)
			return false;
		int x = nums[0];
		int y = INT_MAX;
		for(int i = 1; i < nums.size(); i++) {
			if(nums[i] > y)
				return true;
			else {
				if(nums[i] <= x) 
					x = nums[i];
				else y = nums[i];
			}
		}
		return false;
    }
};