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

bool cmp(string a,string b)
{return (a+b)>(b+a);}
class Solution {
public:

    string largestNumber(vector<int>& nums) {
        string result="";
		vector<string> arr(nums.size());
		for(int i=0;i<nums.size();i++)
			arr[i]=to_string(nums[i]);
		sort(arr.begin(),arr.end(),cmp);
		for(int i=0;i<arr.size();i++)
			result+=arr[i];
		return result[0]=='0'?"0":result;
    }
};