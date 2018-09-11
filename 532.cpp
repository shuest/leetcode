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
#include<unordered_map>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0) return 0;
		unordered_map<int,bool> m;
		unordered_set<int> s;
		for(int i = 0; i < nums.size(); i++) {
			if(m[nums[i] - k]) s.insert(nums[i]); // 小的有了，插小的
			if(m[nums[i] + k]) s.insert(nums[i] + k); //大的有了插大的 反正set去重
			m[nums[i]] = true; //记为访问过
		}
		return s.size();
    }
};