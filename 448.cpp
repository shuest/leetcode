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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
		vector<bool> hash(nums.size()+1,false);
		for(int i = 0; i < nums.size(); i++) {
			hash[nums[i]] = true;
		}
		for(int i = 1; i < hash.size(); i++) {
			if(hash[i] == false)
				result.push_back(i);
		}
		return result;
   }
};