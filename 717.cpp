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
    bool isOneBitCharacter(vector<int>& bits) {
        int i = 0;
		while ( i < bits.size()) {
			if( i == (bits.size() - 1) ) return true;
			if(bits[i] == 0) i++;
			else i += 2;
		}
		return false;
    }
};