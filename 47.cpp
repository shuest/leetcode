#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cctype>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
		sort(nums.begin(),nums.end());
		do{
			res.push_back(nums);
		}while(next_permutation(nums.begin(),nums.end()));
		//是bool型，有下一个为真，并且每次将nums排列一次
		return res;
    }
};