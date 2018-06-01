#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cctype>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		int len=nums.size();
		int maxn=pow(2,len);
		vector<vector<int>> result(maxn);
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<maxn;j++)
			{
				if(j>>i&1)
					result[j].push_back(nums[i]);
			}
		}
		set<vector<int>> s;
		for(int i=0;i<result.size();i++)
			s.insert(result[i]);
		result.resize(0);
		for(auto it=s.begin();it!=s.end();it++)
			result.push_back(*it);
		return result;
    }
};