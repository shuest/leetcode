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
    int threeSumClosest(vector<int>& nums, int target) {
		int cha=9999999;
		int res;
		for(int i=0;i<nums.size()-2;i++)
		{
			for(int j=i+1;j<nums.size()-1;j++)
			{
				for(int k=j+1;k<nums.size();k++)
				{
					int temp=nums[i]+nums[j]+nums[k];
					if(abs(temp-target)<cha)
					{
						cha=abs(temp-target);
						res=temp;
					}
				}
			}
		}
		return res;		
    }
};