
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
		int len=s.length();
		vector<bool> dp(len+1,false);
		dp[0]=true;
		for(int i=1;i<=len;i++)
			for(int j=i;j>=0;j--)
			{
				string tmp=s.substr(j,i);//s[j]->s[j+i]
				auto it=find(wordDict.begin(),wordDict.end(),tmp);
				if(it!=wordDict.end()&&dp[j])
				{
					dp[i]=true;
					break;
				}
			}
			return dp[len];
    }
};