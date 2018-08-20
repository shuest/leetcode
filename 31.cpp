#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
		next_permutation(nums.begin(),nums.end());
    }
};