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
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int> s;
		for(int i = 0; i < matrix.size(); i++) {
			for(int j = 0; j < matrix[i].size(); j++) {
				s.insert(matrix[i][j]);
				if(s.size() > k) 
					s.erase(--s.end()); //超过k个就删掉
			}
		}
		return *s.rbegin(); //返回最后一个值
    }
};