
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
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
		if(nums.size()==0)
			return result;
		string temp="";
		int flag = 0;
		temp+=to_string(nums[0]);
		for(int i=1;i<nums.size();i++){
			if(nums[i] != nums[i-1] + 1 && flag == 1){
				flag = 0;
				temp += "->" + to_string(nums[i-1]);
				result.push_back(temp);
				temp = to_string(nums[i]);
			}else if(nums[i] != nums[i-1] + 1){
				result.push_back(temp);
				temp=""+to_string(nums[i]);
			}else {
				flag = 1;
			}
		}
		if(flag == 1) {
			temp += "->" + to_string(nums[nums.size()-1]);
		}
		result.push_back(temp);
		return result;
    }
};