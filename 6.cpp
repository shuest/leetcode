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
    string convert(string s, int numRows) {
        string t[numRows];
		string ans;
		int i=0;
		while(i<s.length())
		{
			for(int j=0;j<numRows&&i<s.length();j++)
				t[j]+=s[i++];
			for(int k=numRows-2;k>0&&i<s.length();k--)
				t[k]+=s[i++];
		}
		for(int j=0;j<numRows;j++)
			ans+=t[j];
		return ans;
    }
};