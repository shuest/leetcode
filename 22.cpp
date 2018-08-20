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
    vector<string> generateParenthesis(int n) {
       dfs("",n,0);
	   return result;
    }
private:
	vector<string>result;
	void dfs(string cur,int left,int right) //要填入left个(,right个）
	{
		if(left==0&&right==0)
		{
			result.push_back(cur);
			return;
		}
		if(left>0) dfs(cur+"(",left-1,right+1);
		if(right>0) dfs(cur+")",left,right-1);
	}
};