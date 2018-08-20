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
    bool isMatch(string s, string p) {
		if(p.empty())
			return s.empty();
		if(p.length()==1||p[1]!='*')	//一位或非任意
		{
			if(s.empty()||(p[0]!='.'&&p[0]!=s[0]))
				return false;
			else return isMatch(s.substr(1),p.substr(1));
		}
		while(!s.empty()&&(s[0]==p[0]||p[0]=='.')) //非空并能匹配上
		{
			if(isMatch(s,p.substr(2)))
				return true;
			s=s.substr(1);
		}
		return isMatch(s,p.substr(2));
    }
};