
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
    string multiply(string num1, string num2) {
		vector<int> ret(num1.size()+num2.size(),0);//99*99是4位，所以结果最多是两个数位和
		int n1=num1.size(),n2=num2.size();
		for(int i=n1-1;i>=0;i--)//从低位开始
		{
			for(int j=n2-1;j>=0;j--)
			{
				int k=(n1-1-i)+(n2-1-j);
				ret[k]+=(num1[i]-'0')*(num2[j]-'0');
				ret[k+1]+=ret[k]/10;
				ret[k]%=10;
				//ret大的是高位
			}
		}
		int i=ret.size()-1;
		for(;i>0&&!ret[i];i--);
		string result;
		for(;i>=0;i--)
			result.push_back(ret[i]+'0');
		return result;
    }
};