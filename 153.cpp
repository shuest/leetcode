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
    int findMin(vector<int>& nums) {
		int low=0,high=nums.size()-1;
		while(low<high)	//[left, mid]
		{
			int mid=(low+high)/2;
			if(nums[mid]<nums[high]) //找小的，在前面
				high=mid;
			else low=mid+1;
		}
		return nums[low];
    }
};