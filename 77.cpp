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
	void generateCombinations(int n,int k,int start,vector<int> &c)
	{	//从start开始搜，存在c里,c(n,k)
		if(c.size()==k)
		{
			res.push_back(c);
			return;
		}
		//还要k-c.size()个空位，所以[i...n]中至少有k-c.size()个元素
		//i最多为n-(k-c.size())+1;可以改
		for(int i=start;i<=n;i++)
		{
			c.push_back(i);
			generateCombinations(n,k,i+1,c);//i以前的已经放过了，不用考虑
			c.pop_back();
		}
		return;
	}
    vector<vector<int>> combine(int n, int k) {
		res.clear();
		if(n<=0||k<=0||k>n)
			return res;
		vector<int> c;
		generateCombinations(n,k,1,c);	//从1开始
		return res;
    }
};