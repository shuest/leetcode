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
    int dominantIndex(vector<int>& nums) {
		int maxn = INT_MIN,idx = -1,sec = INT_MIN;
		for(int i = 0; i < nums.size(); i++) {
			if(nums[i] > maxn) {
				sec = maxn;
				maxn = nums[i];
				idx = i;
			} else if(nums[i] > sec) {
				sec = nums[i];
			}
		}
		return sec * 2 > maxn ? -1: idx;
    }
};