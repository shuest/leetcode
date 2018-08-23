#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int distance=0;
		for(int i=0;i<nums.size()-1&&i<=distance;i++)
			distance=max(distance,i+nums[i]);
		return distance>=(nums.size()-1);
    }
};
//i<=distance表示还能往前走,否则出不去