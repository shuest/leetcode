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

//问有多少个朋友圈
class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
		int n = M.size(), cnt = M.size();
		father.resize(n);
		for(int i = 0; i < n; i++) father[i] = i;
		for(int i = 0; i < n; i++) {
			for(int j = i + 1; j < n; j++) {
				if(M[i][j] == 1) {
				int faA = findFather(i);
				int faB = findFather(j);
				if(faA != faB) {
					father[faA] = father[faB];
					cnt--;
				}
			}
			}
		}
		return cnt;
    }
private:
	vector<int> father;
	int findFather(int x) {
		int a = x;
		while(x != father[x])
			x = father[x];
		while(a != father[a]) {
			int z = a;
			 a = father[a];
			 father[z] = x;
		}
		return x;
	}
};