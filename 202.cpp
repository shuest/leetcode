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
    bool isHappy(int n) {
        int cnt=0;
		while (n!=1)
		{
			cnt++;
			int temp=0;
			while(n)
			{
				temp=temp+n%10*(n%10);
				n=n/10;
			}
			n=temp;
			if(cnt>10)
				return false;
		}
		return true;
    }
};