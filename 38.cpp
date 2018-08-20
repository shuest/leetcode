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
    string countAndSay(int n) {
        string temp="";
		string num="";
		int cnt=1;
		if(n==1)
			return "1";
		if(n==2)
			return "11";
		string a="11";
		for(int i=1;i<=n-2;i++)
		{
			for(int j=1;j<a.length();j++)
			{
				if(a[j-1]==a[j])
					cnt++;
				if(a[j-1]!=a[j])
				{
					while(cnt)
					{
						num=(char)(cnt%10+'0')+num;//从个位开始加，堆在前面
						cnt=cnt/10;
					}
					temp+=num;
					num="";
					temp+=a[j-1];
					cnt=1;
				}
				if(j==a.length()-1)
				{
					while(cnt)
					{
						num=(char)(cnt%10+'0')+num;
						cnt=cnt/10;
					}
					temp+=num;
					num="";
					temp+=a[j];
					cnt=1;
				}
			}
			a=temp;
			temp="";
		}
		return a;
	}
};