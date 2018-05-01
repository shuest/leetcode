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
    int evalRPN(vector<string>& tokens) {
		stack<int> s;
		for(int i=0;i<tokens.size();i++)
		{
			string t=tokens[i];
			if(t=="+"||t=="-"||t=="*"||t=="/")
			{
				int b=s.top();
				s.pop();
				int a=s.top();
				s.pop();
				if(t=="+")
					s.push(a+b);
				else if(t=="-")
					s.push(a-b);
				else if(t=="*")
					s.push(a*b);
				else 
					if(b==0)
						return 0;
					else
					s.push(a/b);

			}
			else s.push(stoi(t));
		}
		return s.top();
    }
};