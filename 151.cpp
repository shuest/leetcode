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
using namespace std;

class Solution {
public:
    void reverseWords(string &s) {
		stack<string> sstack;
		int flag=0; //前面没单词
		string temp="";
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=' '&&flag==0)
			{
				temp="";
				temp+=s[i];
				flag=1;
			}
			else if(s[i]!=' ')
				temp+=s[i];
			else if(s[i]==' '&&flag==1)
			{
				sstack.push(temp);
				flag=0;
			}
			if(i==s.length()-1&&flag==1)
				sstack.push(temp);
		}
		s.clear();
		while(!sstack.empty())
		{
			string temp=sstack.top();
			s+=temp;
			sstack.pop();
			if(!sstack.empty())
			{
				s+=' ';
			}
		}
	}
};