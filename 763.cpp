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
    vector<int> partitionLabels(string S) {
		int end = -1,start = 0;
		vector<int> ans;
		for(int i = 0; i < S.size(); i++) {
			end  = max(end,(int)S.find_last_of(S[i]));
			if(i == end) {
				ans.push_back(end - start + 1);
				start = end + 1;
			}
		}
		return ans;
    }
};