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
    vector<int> majorityElement(vector<int>& nums) {
		int n = nums.size(),cnt = n / 3;
		sort(nums.begin(),nums.end());
		vector<int> res;
		if(nums.size() == 0)
			return res;
		if(nums.size() == 1) {
			res.push_back(nums[0]);
			return res;
		}
		if(nums.size() == 2) {
			res.push_back(nums[0]);
			if(nums[1] != nums[0])
				res.push_back(nums[1]);
			return res;
		}
		int temp = 1;
		for(int i = 1; i < n ; i++) {
			if(nums[i] != nums[i - 1]) {
				if(temp > cnt) {
					res.push_back(nums[i - 1]);
				}
				temp = 1;
			}
			if(nums[i] == nums[i - 1]) {
				temp++;
			}
		}
		if(temp > cnt)
			res.push_back(nums[n-1]);
		return res;
    }
};