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
	vector<vector<int>> res;
	void generateCombinations(vector<int>& candidates,int start,int target,vector<int> &c)
	{	
		if(start==candidates.size())
			return;	//遍历结束
		if(target==0)
		{
			res.push_back(c);	//对的
			return;
		}
		for(int i=start;i<candidates.size();i++)
		{
			if(target<candidates[i])
				return;
			c.push_back(candidates[i]);
			generateCombinations(candidates,i,target-candidates[i],c);
			c.pop_back();
		}
		return;
	}
	vector<vector<int>> combinationSum(vector<int>& candidates,int target)
	{
		sort(candidates.begin(),candidates.end());
		res.clear();
		vector<int> c;
		generateCombinations(candidates,0,target,c);
		return res;
	}
  
};