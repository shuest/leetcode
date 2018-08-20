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
    int longestValidParentheses(string s) {
		int n=s.length();
		if(n==0)
			return 0;
		vector<int> dp(n+1,0);
		int longestlen=0;
		for(int i=2;i<=n;i++)
		{
			if(s[i-1]==')')
			{
				if(s[i-2]=='(')
					dp[i]=dp[i-2]+2;
				else if(s[i-dp[i-1]-2]=='(')
					dp[i]=dp[i-1]+2+dp[i-2-dp[i-1]];
				longestlen=max(longestlen,dp[i]);
			}
		}
		return longestlen;
    }
};
