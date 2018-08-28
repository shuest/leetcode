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
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0) return "0";
		string result="";
		if(((numerator<0)^(denominator<0))==1) //有一个是负数的，是负数
			result+='-';
		long a=abs((long)numerator),b=abs((long)denominator);
		result+=to_string(a/b);
		long r=a%b;
		if(r!=0) result+='.';
		map<int,int> m;
		while(r!=0)
		{
			if(m[r]!=0) //r重复出现了
			{
				result.insert(m[r],1,'(');
				//insert(size_type _Off,size_type _Count, _Elem _Ch)
				result+=')';
				break;
			}
			m[r]=result.size();//随便给个非零的
			r=r*10;
			result+=to_string(r/b);
			r=r%b;
		}
		return result;
    }
};