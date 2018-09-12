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
#include<queue>
using namespace std;

class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        char t[200];
		int m,n,p,q;
		sscanf(a.c_str(),"%d+%di",&m,&n);
		sscanf(b.c_str(),"%d+%d",&p,&q);
		sprintf(t,"%d+%di",(m*p - n*q),(n*p + m*q));
		string ans = t;
		return ans;
    }
};