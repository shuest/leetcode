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
    bool isAnagram(string s, string t) {
        if(s.size()==0&&t.size()==0)
			return true;
		sort(s.begin(),s.end());
		sort(t.begin(),t.end());
		if(s==t)
			return true;
		 return false;

    }
};