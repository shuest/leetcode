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
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<string> t=strs;	//t记录原始的
		vector<vector<string>> res;
        for(int i=0;i<strs.size();i++)
		{
			sort(strs[i].begin(),strs[i].end());
		}
		map<string,vector<int>> mp;
		for(int i=0;i<strs.size();i++)
		{
			mp[strs[i]].push_back(i);
		}
		vector<string> temp;
		for(auto it=mp.begin();it!=mp.end();it++)
		{	//遍历方法重要！对string对应vector的遍历
			for(int i=0;i<mp[it->first].size();i++)
			{
				temp.push_back(t[mp[it->first][i]]);	
				//string对应的vector中保留原来的下标，提取出原来的字符串
			}
			res.push_back(temp);
			temp.clear();
		}
		return res;
    }	
};