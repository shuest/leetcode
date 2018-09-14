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
#include<unordered_set>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> s;
		for(int i = 0; i < candies.size(); i++) 
			s.insert(candies[i]);
		return min(s.size(),candies.size()/2);
    }
};
