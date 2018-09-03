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

//用flag防止多个空格连续
class Solution {
public:
    int countSegments(string s) {
        int cnt = 0,flag = 0;
		for(int i = 0; i < s.length(); i++) {
			if(s[i] != ' '&& flag == 0) {
				cnt++;
				flag = 1;
			} else if(s[i] == ' ') {
				flag = 0;
			}
		}
		return cnt;
    }
};