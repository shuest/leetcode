#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bitset>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sold=0;
		int rest=0;
		int hold=INT_MIN;
		for(int i=0;i<prices.size();i++)
		{
			int price=prices[i];
			int pre_sold=sold;
			sold=hold+price;	//卖=昨天买价+今天市价
			hold=max(hold,rest-price);//买=max(昨天买价，昨天休息价-今天市价）
			rest=max(rest,pre_sold);//休息=max（昨天休息价，昨天卖价）
		}
		return max(rest,sold);
    }
};