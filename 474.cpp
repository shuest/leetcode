
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
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int> (n+1,0));	//以多少个0和1结尾的，最多的个数
		for(int i=0;i<strs.size();i++)
		{
			int zeros = 0,ones=0;
			string s=strs[i];
			for(int j=0;j<s.size();j++)	//多少0和1
			{
				if(s[j]=='0')
					zeros++;
				else ones++;
			}
			for(int i=m;i>=zeros;i--)
				for(int j=n;j>=ones;j--)
					dp[i][j]=max(dp[i][j],dp[i-zeros][j-ones]+1);
		}
		return dp[m][n];
    }
};