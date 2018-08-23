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
    int maxProfit(vector<int>& prices) {
        int ans=0;
		for(int i=1;i<prices.size();i++)
			if(prices[i]>prices[i-1])
				ans+=prices[i]-prices[i-1];
		return ans;
    }
};