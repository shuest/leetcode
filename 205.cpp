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
    bool isIsomorphic(string s, string t) {
        map<char,int> stoi;
		map<char,int> ttoi;
		int cnt=0;
		for(int i=0;i<s.size();i++)
		{
			if(stoi.find(s[i])==stoi.end()	)//s没有时
			{
				if(ttoi.find(t[i])==ttoi.end())	//t没有时
				{
					stoi[s[i]]=cnt;
					ttoi[t[i]]=cnt;
					cnt++;
				}
				else return false;
			}
			else if(ttoi.find(t[i])==ttoi.end())
				return false;	//s有，t没有
			else{	//都有时
				if(stoi[s[i]]!=ttoi[t[i]])
					return false;
			}
		}
		return true;
    }
};