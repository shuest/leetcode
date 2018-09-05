
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
    int findRadius(vector<int>& houses, vector<int>& heaters) {
		sort(houses.begin(),houses.end());
		sort(heaters.begin(),heaters.end());
		int startindex = 0, maxn = 0;
		for(int i = 0; i < houses.size(); i++) {
			int tempmin = INT_MAX;
			for(int j = startindex; j < heaters.size(); j++) {
				if(abs(heaters[j] - houses[i]) <= tempmin) {
					tempmin = abs(heaters[j] - houses[i]);
					startindex = j;
				} else break;
			}
			maxn = max(maxn, tempmin);
		}
		return maxn;
    }
};