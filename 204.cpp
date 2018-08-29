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
    int countPrimes(int n) {
		if(n<3) return 0;
		vector<unsigned char> f(n,1);
		f[0]=f[1]=0;
		for(long i=2;i*i<=n;i++)
		{
			if(!f[i]) continue;
			for(long j=i*i;j<n;j+=i)//2:4,6,8,10
				f[j]=0;
		}
		int ans=accumulate(f.begin(),f.end(),0);
		return ans;
    }
};