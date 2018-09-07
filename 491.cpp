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

//找字串，最小2个数
class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> result;
		this->nums = nums;
		dfs(-101,-1);
		for(auto it = s.begin(); it != s.end(); it++)
			result.push_back(*it);
		return result;
    }
private:
	set<vector<int>> s;
	vector<int> nums,row;
	void dfs(int lastNum,int index) {
		if(row.size() >= 2) s.insert(row);
		if(index == nums.size()) return;
		for(int i = index + 1; i < nums.size(); i++) {
			if(nums[i] >= lastNum) {
				row.push_back(nums[i]);
				dfs(nums[i],i);
				row.pop_back();
			}
		}
	}
};