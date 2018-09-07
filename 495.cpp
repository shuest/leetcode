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
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int result = 0, oldEnd = -1, newEnd = 0;
		for(int i = 0; i < timeSeries.size(); i++) {
			int newEnd = timeSeries[i] + duration - 1;
			if(newEnd > oldEnd) {
				result += min(duration,newEnd - oldEnd);
				oldEnd = newEnd;
			}
		}
		return result;
    }
};