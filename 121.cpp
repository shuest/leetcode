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
        //�ҵ�min,�õ�ǰֵ��ȥ���min�õ��Ĳ��������ľ͸���
		int minvalue=999999999;
		int ans=0;
		for(int i=0;i<prices.size();i++)
		{
			if(minvalue>prices[i])
				minvalue=prices[i];
			prices[i]=prices[i]-minvalue;
			ans=max(ans,prices[i]);
		}
		return ans;
    }
};