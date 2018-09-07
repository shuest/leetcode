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
    vector<int> constructRectangle(int area) {
        vector<int> result(2,0);
		int l = sqrt(area), w = sqrt(area);
		while(l * w != area) {
			if(l * w < area)
				l++;
			else w--;
		}
		result[0] = l;
		result[1] = w;
		return result;
    }
};