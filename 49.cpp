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
		vector<string> t=strs;	//t��¼ԭʼ��
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
		{	//����������Ҫ����string��Ӧvector�ı���
			for(int i=0;i<mp[it->first].size();i++)
			{
				temp.push_back(t[mp[it->first][i]]);	
				//string��Ӧ��vector�б���ԭ�����±꣬��ȡ��ԭ�����ַ���
			}
			res.push_back(temp);
			temp.clear();
		}
		return res;
    }	
};