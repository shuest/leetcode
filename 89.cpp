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
    vector<int> grayCode(int n) {
        vector<int> res;
		for(int i = 0; i < 1<< n; i++) {
			res.push_back(i^i>>1);
		}
		return res;
    }
};