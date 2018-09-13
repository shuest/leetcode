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
    string optimalDivision(vector<int>& nums) {
        string ans = to_string(nums[0]);
		if(nums.size() == 1) return ans;
		if(nums.size() == 2) return ans + "/" + to_string(nums[1]);
		ans = ans + "/(" + to_string(nums[1]);
		for(int i = 2; i < nums.size(); i++) {
			ans = ans + "/" + to_string(nums[i]);
		}
		return ans + ")";
    }
};