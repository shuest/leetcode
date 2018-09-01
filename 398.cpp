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


//有多个target，随机找到一个返回其下标
class Solution {
private:
	vector<int> nums;
public:
    Solution(vector<int> nums) {
		this->nums = nums;
    }
    
    int pick(int target) {
        vector<int> index;
		for(int i = 0; i < nums.size(); i++) {
			if(nums[i] == target) 
				index.push_back(i);
		}
		return index[rand() % index.size()];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(nums);
 * int param_1 = obj.pick(target);
 */