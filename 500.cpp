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
    vector<string> findWords(vector<string>& words) {
        vector<string> output;
        vector<char> line1 = {'Q','W','E','R','T','Y','U','I','O','P',
                              'q','w','e','r','t','y','u','i','o','p'
        };
        vector<char> line2 = {'A','S','D','F','G','H','J','K','L',
                              'a','s','d','f','g','h','j','k','l'
        };
        vector<char> line3 = {'Z','X','C','V','B','N','M',
                              'z','x','c','v','b','n','m'
        };
		map<char,int> mp;
		for(int i = 0 ; i < line1.size(); i++) {
			mp[line1[i]] = 1;
		}
		for(int i = 0 ; i < line2.size(); i++) {
			mp[line2[i]] = 2;
		}
		for(int i = 0 ; i < line3.size(); i++) {
			mp[line3[i]] = 3;
		}
		for(int i = 0; i < words.size(); i++) {
			int flag = mp[words[i][0]];
			int j = 1;
			for( ; j < words[i].size(); j++) {
				if(mp[words[i][j]] != flag)
					break;
			}
			if(j == words[i].size() )
				output.push_back(words[i]);
		}
		return output;
    }
};