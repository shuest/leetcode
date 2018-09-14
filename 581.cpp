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
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> after;
		after = nums;
		sort(after.begin(),after.end());
		int n = nums.size(),cnt = 0;
		for(int i = 0; i < nums.size(); i ++) {
			if(nums[i] == after[i]) {
				n--; cnt++;
			} else {
				break;
			}
		}
		for(int i = nums.size() - 1; i >= cnt; i--) {
			if(nums[i] == after[i]) n--;
			else break;
		}
		return n;
    }
};