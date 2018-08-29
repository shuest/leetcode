
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

//排序之后记录每个的出现次序
class Solution {
public:
    int majorityElement(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		int temp=0,maxvalue=0,ans=nums[0];
		for(int i=1;i<nums.size();i++)
		{
			if(nums[i-1]==nums[i]){
				temp++;
				if(temp>maxvalue)
				{
					maxvalue=temp;
					ans=nums[i];
				}
			}
			else temp=0;
		}
		return ans;
    }
};