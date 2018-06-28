
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
	int check(char a)
	{
		return a!='0';
	}//0是0.不起作用.1是非零 起作用的
	int func(char a,char b)
	{
		return a=='1'||a=='2'&&b<='6';
	}//10位数或者2开头小于26的
    int numDecodings(string s) {
		int len = s.length();
		vector<int> dp(len,0);
		if(len==0||s[0]=='0')
			return 0;
		if(len==1)
			return check(s[0]);
		dp[0]=1;
		dp[1]=check(s[1])+func(s[0],s[1]);
		for(int i=2;i<len;i++)
		{
			if(check(s[i]))
				dp[i]=dp[i-1];	//i位起作用，暂时挪过来。不起作用就是0
			if(func(s[i-1],s[i]))
				dp[i]+=dp[i-2];	//也就是i位=i-1位+i-2位的
		}
		return dp[len-1];
    }
};