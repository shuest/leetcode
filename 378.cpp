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
					s.erase(--s.end()); //����k����ɾ��
			}
		}
		return *s.rbegin(); //�������һ��ֵ
    }
};