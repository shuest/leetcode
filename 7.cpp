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
    int reverse(int x) {
        string s = to_string(x);
		if(s[0]=='-')
			std::reverse(s.begin()+1,s.end());
		else 
			std::reverse(s.begin(),s.end());
		long long int temp=stoll(s);
		if(temp>2147483647||temp<-2147483648)
			return 0;
		return (int) temp;
    }
};