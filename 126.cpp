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
#include<unordered_set>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
		unordered_set<string>dict(wordList.begin(),wordList.end());
		if(!dict.count(endWord)) return ;
		dict.erase(beginWord);
		dict.erase(endWord);

		unordered_map<string,int> steps{{beginWord,1}};
		unordered_map<string,vector<string>>parents;
		queue<string> q;
		q.push(beginWord);
		vector<vector<string>> ans;

		const int l=beginWord.length();
		int step=0;
		bool found=false;
		while(!q.empty()&&!found)
		{
			
		}

    }

};