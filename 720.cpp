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
	static bool cmp(pair<string,int> a,pair<string,int>b) {
		if(a.second == b.second)
			return a.first < b.first;
		else return a.second > b.second;
	}
    string longestWord(vector<string>& words) {
		vector<pair<string,int>> v;
		set<string> s;
		for(int i = 0; i < words.size(); i++) {
			pair<string,int> p;
			p.first = words[i];
			p.second = words[i].length();
			s.insert(words[i]);
			v.push_back(p);
		}
		sort(v.begin(),v.end(),cmp);
		for(int i = 0; i < v.size(); i++) {
			string word = v[i].first;
			int j = word.size() - 1;
			for(; j > 0 ; j--) {
				if(!s.count(word.substr(0,j)))  //看set中是否有word的一部分,-1是不包括最后一位字母
					break;
			}
			if(j == 0)
				return word;
		}
		return "";
	}
};