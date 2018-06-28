
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
	}//0��0.��������.1�Ƿ��� �����õ�
	int func(char a,char b)
	{
		return a=='1'||a=='2'&&b<='6';
	}//10λ������2��ͷС��26��
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
				dp[i]=dp[i-1];	//iλ�����ã���ʱŲ�������������þ���0
			if(func(s[i-1],s[i]))
				dp[i]+=dp[i-2];	//Ҳ����iλ=i-1λ+i-2λ��
		}
		return dp[len-1];
    }
};