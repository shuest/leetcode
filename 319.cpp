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
    int bulbSwitch(int n) {
        vector<int> bulb(n,1);
		for(int i = 1; i < n; i++) {
			for(int j = i; j < n; j+=i) {
				if(bulb[j] == 0) {
					bulb[j] = 1;
				}
				else bulb[j] = 0;
			}
		}
		if(bulb[n - 1] == 0) 
			bulb[n - 1] = 1;
		else bulb[n - 1] = 0;

		int cnt = 0;
		for(int i = 0; i < n; i++) {
			cnt += bulb[i];
		}
		return cnt;
    }
};

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};