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
    int minDistance(string word1, string word2) {
        //dp[i][j]为第一个字符的i距离第二个字符j的距离
		vector<vector<int>> dp(word1.size()+ 1,vector<int>(word2.size()+1));
		for(int i = 0; i <= word1.size(); i++) {
			for(int j = 0; j <= word2.size(); j++) {
				if(i == 0)
					dp[i][j] = j;
				else if (j == 0)
					dp[i][j] = i;
				else
					dp[i][j] = min(dp[i - 1][j] + 1,min(dp[i][j - 1] + 1,dp[i-1][j-1] + (word1[i-1] == word2[j-1] ? 0 : 1)));
			}
		}
		return dp[word1.size()][word2.size()];
    }
};