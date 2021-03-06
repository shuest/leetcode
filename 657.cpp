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
    bool judgeCircle(string moves) {
        map<char,int> m;
		for(int i = 0; i < moves.size(); i++) {
			m[moves[i]]++;
		}
		return ((m['L'] == m['R']) && (m['U'] == m['D']));
    }
};