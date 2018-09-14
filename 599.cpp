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
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
		int minSum = 2000;
		for(int i = 0; i < list1.size(); i++) {
			for(int j = 0; j < list2.size(); j++) {
				if(list1[i] == list2[j] && minSum > i + j) {
					ans.clear();
					ans.push_back(list1[i]);
					minSum = i + j;
				} else if (list1[i] == list2[j] && minSum == i + j) 
					ans.push_back(list1[i]);
			}
		}
		return ans;
    }
};