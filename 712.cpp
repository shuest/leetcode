#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;


class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        //dp[i][j]为s1前i个字符和s2前j个字符变相等要删除的字符的最小ASCII码累加值
		int m = s1.length(), n = s2.length();
		vector<vector<int>> dp(m + 1,vector<int>(n+1,0));
		for(int i = 1; i <= m; i++) {
			dp[i][0] = dp[ i - 1][0] + (int)(s1[i - 1]);
		}
		for(int j = 1; j <= n; j++) {
			dp[0][j] = dp[0][j - 1] + (int)(s2[j - 1]);
		}
		for(int i = 1; i <= m; i++) {
			for(int j = 1; j <= n; j++) {
				if(s1[i - 1] == s2[j - 1]) 
					dp[i][j] = dp[i - 1][j - 1];
				else 
					dp[i][j] = min(dp[i - 1][j] + (int) s1[i - 1],dp[i][j - 1] + (int)s2[j - 1]);
			}
		}
		return dp[m][n];
    }
};