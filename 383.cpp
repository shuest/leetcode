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
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>hash(256);
		for(int i = 0; i < magazine.size(); i++) {
			hash[magazine[i]]++;
		}
		for(int i = 0;i < ransomNote.size(); i++) {
			if(hash[ransomNote[i]] > 0)
				hash[ransomNote[i]]--;
			else return false;
		}
		return true;
    }
};