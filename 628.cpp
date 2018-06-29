
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
using namespace std;

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
		int n=nums.size();
		sort(nums.begin(),nums.end(),greater<int>());	//从大到小
		return max(nums[0]*nums[1]*nums[2],nums[0]*nums[n-1]*nums[n-2]);
    }
};