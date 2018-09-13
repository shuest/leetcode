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
    int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		int sum = 0;
		for(int i = 0;i < nums.size(); i++) {
			if(i %2 == 0)
				sum += nums[i];
		}
		return sum;
    }
};