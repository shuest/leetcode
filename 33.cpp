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
    int search(vector<int>& nums, int target) {
		int high=nums.size()-1;
		int mid=0,low=0;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(nums[mid]==target)
				return mid;
			if(nums[low]<=nums[mid])
			{	//前面有序
				if(nums[low]<=target&&target<=nums[mid])
					high=mid-1;
				else low=mid+1;
			}
			else { //后面有序
				if(nums[mid]<=target&&target<=nums[high])
					low=mid+1;
				else
					high=mid-1;
			}
		}
		return -1;
    }
};