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
    int pivotIndex(vector<int>& nums) {
		int n = nums.size(),sum = 0, t = 0;
		if(n == 0) return  -1;
		if(n == 1) return 0;
		for(int i = 0; i < n; i++) sum += nums[i];
		for(int i = 0; i < n; i++) {
			sum -= nums[i];
			if(sum == t) return i;
			t += nums[i];
		}
		return -1;
    }
};