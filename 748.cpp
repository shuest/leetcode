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
	 int convert = 'a'-'A';
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
       
		string ans;
		map<int,int> mp;
		for(int i = 0; i < licensePlate.size(); i++){
			if(licensePlate[i] >= 'A' && licensePlate[i] <= 'Z') {
				licensePlate[i] += convert;
			}
			if(licensePlate[i] >= 'a' && licensePlate[i] <= 'z')
				mp[licensePlate[i] - 'a']++;
		}
		int minlen = 9999;
		for(int i =0; i < words.size(); i++) {
			int len = words[i].size();
			if(contains(mp,words[i])) {
				if(len < minlen) {
					minlen = len;
					ans = words[i];
				}
			}
		}
		return ans;
    }
	bool contains(map<int,int> mp,string word) {
		map<int,int> mp2;
		for(int i = 0; i < word.size(); i++) {
			if(word[i] >= 'A' && word[i] <= 'Z') {
				word[i] += convert;
			}
			if(word[i] >= 'a' && word[i] <= 'z')
			mp2[word[i]-'a']++;
		}
		for(int i = 0; i < 26;i ++) {
			if(mp2[i] < mp[i]) return false;
		}
		return true;
	}
};