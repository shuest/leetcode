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
private:
	int maxn;
	map<int,bool> m;
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
		maxn= maxChoosableInteger;
		if(maxn >= desiredTotal) return  true;
		if((1+maxn) * maxn /2 < desiredTotal) return false;
		return canWin(desiredTotal,0);
    }
	bool canWin(int target, int visited) {
		//用一个超级长的二进制记录，假如10访问过，就把第10位记录成1
		if(m.find(visited) != m.end()) return m[visited];
		for(int i = 1; i <= maxn; i++) {
			int mask = (1 << i);
			if((mask &visited) == 0 && (i >= target || canWin(target - i, mask | visited) == false)) {
				m[visited] = true;
				return true;
			}
		}
		m[visited] = false;
		return false;
	}
};