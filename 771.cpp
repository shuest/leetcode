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
    int numJewelsInStones(string J, string S) {
		int ans = 0,hash[256] = {0};
		for(auto i : J) hash[i] = 1;
		for(auto i : S) if(hash[i]) ans++;
		return ans;
    }
};