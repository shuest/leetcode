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
    string simplifyPath(string path) {
        stack<string> s;
		string result="",temp="";
		int i=0,len=path.length();
		while(i<len)
		{
			while(i<len &&path[i]=='/')	i++;
			temp="";
			while(i<len&&path[i]!='/')
				temp+=path[i++];
			if(temp==".."&&!s.empty())
				s.pop();
			else if(temp!=""&&temp!="."&&temp!="..")
				s.push(temp);
		}
		if(s.empty())	return "/";
		while(!s.empty())
		{
			result="/"+s.top()+result;
			s.pop();
		}
		return result;

    }
};