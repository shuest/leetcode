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
    char nextGreatestLetter(vector<char>& letters, char target) {
		auto it = upper_bound(letters.begin(),letters.end(),target);
		if(it == letters.end())
			return letters[0];
		else return *it;
    }
};