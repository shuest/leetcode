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
using namespace std;
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        set<string> dict,visit;
		for(int i=0;i<wordList.size();i++)
			dict.insert(wordList[i]);	//用set插一下，排序
		queue<pair<string,int>>q;
		q.push(make_pair(beginWord,1));
		while(!q.empty())
		{
			string word=q.front().first;
			int num=q.front().second;
			q.pop();
			for(int i=0;i<word.length();i++)	//对每个单词的位置
			{
				string newword=word;
				for(int j=0;j<26;j++)	
				{
					newword[i]='a'+j;
					if(dict.find(newword)!=dict.end()&&visit.find(newword)==visit.end())
					{
						if(newword==endWord)
							return num+1;
						visit.insert(newword);
						q.push(make_pair(newword,num+1));
					}
				}
			}
		}
		return 0;
    }
};
