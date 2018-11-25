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
    int rangeBitwiseAnd(int m, int n) {
        int i = 0;
		while( m != n) {
			m>>=1;
			n>>=1;
			i++;
		}
		return (m<<i);
    }
};