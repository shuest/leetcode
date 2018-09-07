#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;

class solution{
public:
	vector<vector<int>> loadBalancing (vector<int> jobTime,int machineNum) {
		this->jobTime = jobTime;
		this->machineNum = machineNum;
		for(int i = 0; i < jobTime.size(); i++) {
		
		}
	}
private:
	vector<int> jobTime;
	int maxTime ,tempMaxtime ,machineNum;
	vector<vector<int>> resultNum(machineNum),resultTime(machineNum),tempNum(machineNum),tempTime(machineNum);
	void dfs(int index,int machine) {
		if(index > jobTime.size())
			 return;
		if(index == jobTime.size()) {
			for(int i = 0; i < tempTime.size(); i++)
			{
				tempMaxTime = max(tempMaxTime,tempTime[i]);
			}
			if(tempMaxTime < maxTime) {
				maxTime = tempMaxTime;
				resultNum = tempNum;
			}
			return;
		}
		for(int i = 0; i < machinNum; i++) {
			tempNum[i].push(index + 1);
			tempTime[i] += jobTime[index + 1];
			dfs(index + 1, i);
			tempTime[i] -= jobTime[index + 1];
			tempNum[i].pop_back();
		}

	}

};