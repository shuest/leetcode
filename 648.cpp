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
    string replaceWords(vector<string>& dict, string sentence) {
        set<string> s;
		for(int i = 0; i < dict.size(); i++) {
			s.insert(dict[i]);
		}
		vector<string> words;
		int pre = 0;
		for(int i = 0; i < sentence.size();i++) {
			if(sentence[i] == ' ') {
				string temp = sentence.substr(pre,i - pre);
				words.push_back(temp);
				pre = i + 1;
			}
			if( i == sentence.size() - 1) {
				string temp = sentence.substr(pre,i - pre + 1);
				words.push_back(temp);
				pre = i + 1;
			}
		}
		for(int i = 0; i < words.size(); i++) {
			for(int j = 0; j < words[i].size(); j++) {
				if(s.find(words[i].substr(0,j + 1)) != s.end()) { //ÕÒµ½
					words[i] = words[i].substr(0, j + 1);
					break;
				}
			}
		}
		string ans = words[0];
		for(int i = 1; i < words.size(); i++) 
			ans += ' ' + words[i];
		return ans;
    }
};