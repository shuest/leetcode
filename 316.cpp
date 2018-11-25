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
#include<unordered_map>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
		if(s.length() <= 0)
			return "";
		map<char, int> hash, visited;
		for(int i = 0; i < s.length(); i++)
			hash[s[i]]++;
		string ans;
		for(int i = 0; i < s.size(); i++) {
			hash[s[i]]--;
			if(visited[s[i]]) continue; //放好了
			while(ans.size() && hash[ans.back()] && s[i] < ans.back()) {
				visited[ans.back()] = 0; //删了就没放好
				ans.pop_back();
			}
			ans += s[i];
			visited[s[i]] = 1;
		}
		return ans;
    }
};