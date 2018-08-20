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
    int jump(vector<int>& nums) {
        int times=0;
		int reached=0;
		int maxm=0;
		for(int i=0;i<nums.size();i++)
		{
			if(reached<i)
			{
				times++;
				reached=maxm;
			}
			maxm=max(maxm,i+nums[i]);
		}
		return times;
    }
};