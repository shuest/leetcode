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
    int minMoves2(vector<int>& nums) {
		int result = 0,n = nums.size();
		nth_element(nums.begin(),nums.begin() + n / 2,nums.end());
		int mid = *(nums.begin() + n/2);
		for(int i = 0; i < nums.size(); i++) {
			result += abs(nums[i] - mid);
		}
		return result;
    }
};