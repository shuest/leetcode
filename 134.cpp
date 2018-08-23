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
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(gas.empty())
			return -1;
		int total=0,temp=0,index=0;
		for(int i=0;i<gas.size();i++)
		{
			total+=gas[i]-cost[i];
			if(temp>=0)
				temp+=gas[i]-cost[i];
			else{
				temp=gas[i]-cost[i];
				index=i;
			}
		}
		return total>=0?index:-1;
    }
};