#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cctype>
using namespace std;
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string>res;
		int len=s.length();
		for(int i=1;i<=3&&i<=len-3;i++)		//最后三个至少3位
		{
			for(int j=1;j<=3&&i+j<=len-2;j++)	//最后两个至少两位
			{
				for(int k=1;k<=3&&i+j+k<=len-1;k++)	//最后一个至少1位
				{
					string s1=s.substr(0,i),s2=s.substr(i,j),s3=s.substr(i+j,k),s4=s.substr(i+j+k);
					if(isvalid(s1)&&isvalid(s2)&&isvalid(s3)&&isvalid(s4))
						res.push_back(s1+'.'+s2+'.'+s3+'.'+s4);
				}
			}
		}
		return res;
    }

	bool isvalid(string s)
	{
		return s.length()>=1&&s.length()<=3&&(s[0]!='0'||s.length()==1)&&stoi(s)<=255;
	}
};