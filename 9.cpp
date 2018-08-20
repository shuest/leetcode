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
    bool isPalindrome(int x) {
        string s=to_string(x);
		string t=s;
		reverse(s.begin(),s.end());
		if(s==t)
			return true;
		else return false;
    }
};