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
    string toLowerCase(string str) {
		for(int i = 0; i < str.size();i++)
			if(str[i]>='A'&&str[i] <='Z')
				str[i] = str[i]+'a'-'A';
		return str;
    }
};