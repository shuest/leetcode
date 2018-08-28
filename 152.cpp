
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
    int maxProduct(vector<int>& nums) {
		if(nums.size()==0) return 0;
		int result=nums[0],maxValue=nums[0],minValue=nums[0];
		for(int i=1;i<nums.size();i++)
		{
			//正的最大
			int tempMax=max(nums[i],maxValue*nums[i]);
			int tempMin=min(nums[i],maxValue*nums[i]);
			//负的最小
			maxValue=max(tempMax,minValue*nums[i]);
			minValue=min(tempMin,minValue*nums[i]);
			result=max(maxValue,result);
		}
		return result;
    }
};