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
    int strStr(string haystack, string needle) {
		int len1=haystack.length();
		int len2=needle.length();
		if(len2==0)
			return 0;
		for(int i=0;i<=len1-len2;i++)
			for(int j=0;j<len2&&needle[j]==haystack[i+j];j++)
				if(j==len2-1)
					return i;
		return -1;
    }
};