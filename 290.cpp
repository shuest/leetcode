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
    bool wordPattern(string pattern, string str) {
        map<char,string> ptos;
		map<string,char> stop;
		int len=pattern.size();
		vector<string> s(len);
		int cnt=0; //多少空格
		for(int i=0;i<str.size();i++)
		{
			if(str[i]==' ')
				cnt++;
		}
		if(cnt!=len-1)	//格式长度不匹配
			return false;
		int t=0;

		for(int i=0;i<str.length();i++)
		{
			if(str[i]!=' ')
			{
				s[t]+=str[i];
			} else
				t++;
			
		} //把每个单词记录到s中

		for(int i=0;i<len;i++)
		{		//出现过这个字符串			//这个字符对应的字符串不是str中的
			if(ptos.find(pattern[i])!=ptos.end()&&ptos[pattern[i]]!=s[i]
			||stop.find(s[i])!=stop.end()&&stop[s[i]]!=pattern[i])
				//出现过这个字符串对应的字符，且该字符与原来pattern中的不符
				return false;
			ptos[pattern[i]]=s[i];	//确定字符对应的字符串
			stop[s[i]]=pattern[i];	//确定字符串对应的字符
		}
		return true;
    }	
};