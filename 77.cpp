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
	vector<vector<int>> res;
	void generateCombinations(int n,int k,int start,vector<int> &c)
	{	//��start��ʼ�ѣ�����c��,c(n,k)
		if(c.size()==k)
		{
			res.push_back(c);
			return;
		}
		//��Ҫk-c.size()����λ������[i...n]��������k-c.size()��Ԫ��
		//i���Ϊn-(k-c.size())+1;���Ը�
		for(int i=start;i<=n;i++)
		{
			c.push_back(i);
			generateCombinations(n,k,i+1,c);//i��ǰ���Ѿ��Ź��ˣ����ÿ���
			c.pop_back();
		}
		return;
	}
    vector<vector<int>> combine(int n, int k) {
		res.clear();
		if(n<=0||k<=0||k>n)
			return res;
		vector<int> c;
		generateCombinations(n,k,1,c);	//��1��ʼ
		return res;
    }
};