#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cctype>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
		int len=s.size();
		int l=0,r=len-1;
		if(len==0)
			return true;
		while(l<r)
		{
			while(!isalnum(s[l])&&l<r)
				l++;
			while(!isalnum(s[r])&&l<r)
				r--;
			if(tolower(s[l])!=tolower(s[r]))
				return false;
			else
			{
				l++;r--;
			}
		}
		return true;
    }
};