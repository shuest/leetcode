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
	vector<int> temppath,path,res;
    vector<vector<string>> partition(string s) {
        vector<vector<string >>res;
		vector<string> temp;
		dfs(res,temp,0,s);
		return res;
    }
	void dfs(vector<vector<string>> &res,vector<string> &temp,int pos,string s)
	{
		if(pos==s.length())
			res.push_back(temp);
		for(int i=pos;i<s.length();i++)
		{
			if(ispar(s,pos,i))
			{
				temp.push_back(s.substr(pos,i-pos+1));
				dfs(res,temp,i+1,s);
				temp.pop_back();	
			}
		}
	}
	bool ispar(string s,int i,int j)
	{
		while(i<j)
		{
			if(s[i]!=s[j])
				return false;
            i++;j--;
		}
		return true;
	}
};