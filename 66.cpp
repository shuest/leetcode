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
    vector<int> plusOne(vector<int>& digits) {
		for(int i=digits.size()-1;i>=0;i--)
		{
			if(digits[i]!=9)
			{
				digits[i]=digits[i]+1;
				return digits;
			}
			else digits[i]=0; //99999+1=1000000
		}
		digits.insert(digits.begin(),1);//插入开头的1
		return digits;
    }
};