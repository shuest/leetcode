
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

//最多出现两次，把后面的往前插，插完为止
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if(nums.empty())
			return 0;
		int index=0,count=1;
		for(int i=1;i<nums.size();i++)
		{
			if(nums[i]==nums[index])
			{
				if(count<2){
					nums[++index]=nums[i];
					count++;
				}
				//多于2次直接略过
			}
			else{
				nums[++index]=nums[i];
				count=1;
			}
		}
		return index+1;
    }
};