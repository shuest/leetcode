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
    bool isSubsequence(string s, string t) {	//s–° t¥Û
		int p=0,q=0;
		int lens=s.size(),lent=t.size();
		while(p<lens&&q<lent)
		{
			while(q<lent&&t[q]!=s[p])
				q++;
			if(t[q]==s[p])
			{
				p++;
				q++;
			}
		}
		if(p==lens) return true;
		else return false;
	}
};