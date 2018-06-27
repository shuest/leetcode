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
    int integerBreak(int n) {
		memo=vector<int> (n+1,-1);
        memo[1]=1;//memo[i]是将i分割后的最大乘积
		for(int i=2;i<=n;i++)
			for(int j=1;j<=i-1;j++)
			{	//j+(i-j)
				memo[i]=max3(memo[i],j*(i-j),memo[i-j]*j);
			}
		return memo[n];
    }
private:
	vector<int> memo;
	int max3(int a,int b,int c){
		return max(a,max(b,c));
	}
};