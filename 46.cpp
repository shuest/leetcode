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
	vector<bool> used;
	void generatePermutation(const vector<int> &nums,int index,vector<int> &p)
	{
		//p是一组解
		if(index == nums.size())
		{
			res.push_back(p);
			return ;
		}
		for(int i=0;i<nums.size();i++)
		{
			if(used[i]==NULL)
			{
				p.push_back(nums[i]);
				used[i]=true;
				generatePermutation(nums,index+1,p);
				p.pop_back();
				used[i]=false;
			}
		}
		return;
	}
    vector<vector<int>> permute(vector<int>& nums) {
		used.resize(nums.size());
		vector<int> p;
		generatePermutation(nums,0,p);
		return res;
    }
};