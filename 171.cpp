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
    int titleToNumber(string s) {
        int ans=0;
		for(int i=0;i<s.length();i++)
		{
			ans=ans*26+s[i]-'A'+1;
		}
		return ans;
    }
};