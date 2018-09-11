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
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> result;
		stack<int> s;
		map<int,int> m;
		for(int i = nums.size() - 1; i >= 0; i--) {
			while(!s.empty() && s.top() <= nums[i])
				s.pop();  //小的都弹出，剩下的都是大的了，多个的时候只看最近的一个
			m[nums[i]] = s.empty() ? -1 : s.top();
			s.push(nums[i]);
		}
		for(int i = 0; i < findNums.size(); i++) 
			result.push_back(m[findNums[i]]);
		return result;
    }
};