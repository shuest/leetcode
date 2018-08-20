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
    bool isValid(string s) {
        stack<char> t;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='('||s[i]=='{'||s[i]=='[')
				t.push(s[i]);
			else if(s[i]==')')
			{
				if(i==0||t.empty()||t.top()!='(')
					return false;
				t.pop();
			}
			else if(s[i]==']')
			{
				if(i==0||t.empty()||t.top()!='[')
					return false;
				t.pop();
			}
			else if(s[i]=='}')
			{
				if(i==0||t.empty()||t.top()!='{')
					return false;
				t.pop();
			}
		}
		return t.empty();
    }
};