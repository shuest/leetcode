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
private:
	static bool cmp(vector<int> a,vector<int> b) {
		return a[1] < b[1];
	};
public:
    int findLongestChain(vector<vector<int>>& pairs) {
		sort(pairs.begin(),pairs.end(),cmp);
		int n = pairs.size();
		vector<int> dp(n,0);
		dp[0] = 1;
		int flag = 0;
		for(int i = 1;i < pairs.size(); i++) {
			for(int j = 1; j <= i; j++ ) {
				if(pairs[i][0] > pairs[i - j][1]) {
					dp[i] = max(dp[i], dp[i - j] + 1);
				}
				else dp[i] = max(dp[i-j], dp[i]);
			}
		}
		return dp[n - 1];
    }
};