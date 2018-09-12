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
    string reverseStr(string s, int k) {
		for(int i = 0; i < s.length(); i+=2*k) {
			int t = min(i + k,(int)s.length()); //Ô½½ç
			reverse(s.begin() + i,s.begin() + t);
		}
		return s;
	}
};