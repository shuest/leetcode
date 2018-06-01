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
	vector<int> path;
	vector<vector<int>> res;
    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(k,n,1);
		return res;
    }
	void dfs(int k,int n,int start)
	{
		if(k==0)	//到头
		{
			if(n==0)	//选
				res.push_back(path);
			return;
		}
		for(int i=start;i<=9;i++)	//保证不重复，从start开始
		{
			path.push_back(i);
			dfs(k-1,n-i,i+1);
			path.pop_back();
		}
	}
};