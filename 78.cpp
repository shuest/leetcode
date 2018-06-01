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
    vector<vector<int>> subsets(vector<int>& nums) {
		int len=nums.size();
		int maxn = pow(2,len);
		vector<vector<int>> res(maxn);
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<maxn;j++)
			{
				if(j>>i&1)	//如果第j个结果中，有第i个数
					res[j].push_back(nums[i]);
			}
		}
		return res;
    }
};