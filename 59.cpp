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
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n,vector<int> (n));
		n=n-1;
		int num=1;
		for(int x=0;x<=n;x++,n--)
		{
			for(int j=x;j<=n;j++)
				result[x][j]=num++;
			for(int i=x+1;i<=n-1;i++)
				result[i][n]=num++;
			for(int j=n;j>=x&&x!=n;j--)
				result[n][j]=num++;
			for(int i=n-1;i>=x+1&&x!=n;i--)
				result[i][x]=num++;
		}
		return result;
    }
};