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
    int romanToInt(string s) {
        int ans=0;
		map<char,int> m;
		char c[]={'I','V','X','L','C','D','M'};
		int t[]={1,5,10,50,100,500,1000};
		for(int i=0;i<7;i++)
		{
			m.insert(pair<char,int>(c[i],t[i]));
		}
		for(int i=0;i<s.length()-1;i++)
		{
			if(m[s[i]]>=m[s[i+1]])
				ans=ans+m[s[i]];	//VI
			else ans=ans-m[s[i]];	//IV
		}
		ans=ans+m[s[s.length()-1]];
		return ans;
    }
};