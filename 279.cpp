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
using namespace std;
class Solution {
public:
    int numSquares(int n) {
        queue<pair<int,int>> q;//第几个数字，图中经历了几段路径走到这个数字
		q.push(make_pair(n,0));	
		vector<bool> visit(n+1,false);
		visit[n]=true;
		while(!q.empty())
		{
			int num=q.front().first;
			int step=q.front().second;
			q.pop();

			if(num==0)
				return step;
			for(int i=1;num-i*i>=0;i++)
			{
				if(visit[num-i*i]==false)
				{
					q.push(make_pair(num-i*i,step+1));
					visit[num-i*i]=true;
				}
			}
		}
    }	
};