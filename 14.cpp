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
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)
			return "";
		string s=strs[0];
		for(int i=1;i<strs.size();i++)
		{
			for(int j=0;j<s.length();j++)
			{
				if(s[j]!=strs[i][j])
				{
					s=s.substr(0,j);
					break;
				}
			}
		}
		return s;
    }
};