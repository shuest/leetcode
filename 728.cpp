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
    vector<int> selfDividingNumbers(int left, int right) {
		vector<int> ans;
		for(int i  = left; i <= right; i++) {
			string s = to_string(i);
			bool flag = true;
			for(int j = 0; j < s.length(); j++) {
				if(s[j] == '0' || i %(s[j] - '0') != 0) {
					flag = false;
					break;
				}
			}
			if(flag ) ans.push_back(i);
		}
		return ans;
			
    }
};