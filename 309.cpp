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
			sold=hold+price;	//��=�������+�����м�
			hold=max(hold,rest-price);//��=max(������ۣ�������Ϣ��-�����мۣ�
			rest=max(rest,pre_sold);//��Ϣ=max��������Ϣ�ۣ��������ۣ�
		}
		return max(rest,sold);
    }
};