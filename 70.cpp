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
	vector<int> memo;
    int climbStairs(int n) {
        memo=vector<int>(n+1,-1);
		memo[0]=1;memo[1]=1;
		for(int i=2;i<=n;i++)
			memo[i]=memo[i-1]+memo[i-2];
		return memo[n];
    }
};