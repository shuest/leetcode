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
    string intToRoman(int num) {
        string result="";
		int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
		string b[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
		int index=0,cnt;
		while(num>0)
		{
			cnt=num/a[index];
			while(cnt--)
				result+=b[index];
			num=num%a[index];
			index++;
		}
		return result;
    }
};