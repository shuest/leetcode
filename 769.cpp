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
    int maxChunksToSorted(vector<int>& arr) {
        int ans = 0;
		for(int i = 0,maxn = 0; i < arr.size(); i++) {
			maxn = max(maxn,arr[i]);
			if(maxn == i) ans++;
		}
		return ans;
    }
};