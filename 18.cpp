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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>result;
		int n=nums.size();
		if(n<4) return result;
		sort(nums.begin(),nums.end());
		vector<int> temp(4);
		for(int i=0;i<n-3;i++)
		{
			if(i!=0&&nums[i]==nums[i-1])
				continue;
			for(int j=i+1;j<n-2;j++)
			{
				if(j!=i+1&&nums[j]==nums[j-1])
					continue;
				int begin = j+1,end=n-1;
				while(begin<end)
				{
					int sum=nums[i]+nums[j]+nums[begin]+nums[end];
					if(sum==target)
					{
						temp[0]=nums[i];
						temp[1]=nums[j];
						temp[2]=nums[begin];
						temp[3]=nums[end];
						result.push_back(temp);
						begin++;
						end--;
						//ȥ��
						while(begin<end&&nums[begin]==nums[begin-1])
							begin++;
						while(begin<end&&nums[end]==nums[end+1])
							end--;

					}
					else if(sum>target)
						end--;
					else begin++;
				}
			}
		}
		return result;
    }
};