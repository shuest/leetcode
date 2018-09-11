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
    vector<int> nextGreaterElements(vector<int>& nums) {
		int n = nums.size();
		vector<int> result(n,-1);
		stack<int> s;
		for(int i = 0; i < nums.size(); i ++) {
			while(!s.empty() && nums[s.top()] <nums[i]) {
				result[s.top()] = nums[i];
				s.pop();
			}
			s.push(i);
		}
		for(int i = 0; i < n; i ++) {
			while(!s.empty() && nums[s.top()] < nums[i])  {
				result[s.top()] = nums[i];
				s.pop();
			}
		}
		return result;
    }
};