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
    int findComplement(int num) {
        int temp = num, mask = 1;
		while(temp != 0) {
			temp = temp >> 1;
			mask = mask << 1;
		}
		return num ^(mask - 1);
    }
};