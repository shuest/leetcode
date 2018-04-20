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
    string frequencySort(string s) {
		int cnt[256]={0};
		for(int i=0;i<s.length();i++)
			cnt[s[i]]++;
		sort(s.begin(),s.end(),[&](char a,char b) {
			return cnt[a]>cnt[b]||(cnt[a]==cnt[b]&&a<b);
		} );
		return s;
    }
};
