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
#include<cctype>
using namespace std;


class Solution {
public:
    string reverseString(string s) {
		reverse(s.begin(),s.end());
			return s;
    }
};