
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

//找到最大连续的1
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
		vector<int> cnt(nums.size());
		int maxn = 0;
		cnt[0] = nums[0];
		for(int i = 1; i < nums.size(); i++) {
			if(nums[i] == 0) {
				cnt[i] = 0;
				maxn = max(maxn, cnt[i-1]);
			} else {
				cnt[i] = cnt[i-1]+1;
			}
		}
		maxn = max(maxn,cnt[nums.size() - 1]);
		return maxn;
    }
};