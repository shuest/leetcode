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
#include<regex>
using namespace std;


class Solution {
public:
    bool checkRecord(string s) {
		return !regex_match(s,regex(".*LLL.*|.*A.*A.*"));
    }
};
