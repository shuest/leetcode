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
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> arr = nums;
		auto cmp = [](int a,int b) {return a > b;};
		sort(arr.begin(),arr.end(),cmp);
		vector<string> result(nums.size());
		for(int i = 0; i < nums.size(); i++) {
			for(int j = 0; j < nums.size(); j++) {
				if(nums[i] == arr[j]) {
					switch(j) {
					case 0: result[i] = "Gold Medal"; break;
					case 1: result[i] = "Silver Medal"; break;
					case 2: result[i] = "Bronze Medal"; break;
					default: result[i] = to_string(j+1); break;
					}
				    break;
				}
			}
	    
		}
		return result;
    }
};