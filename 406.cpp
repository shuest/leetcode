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

//�ȴӴ�С���У���������ÿ������ȷ��ÿ���˶��ڵ�k��λ�ã��������б����ߵ�
bool cmp(pair<int,int>a, pair<int,int> b) {
	if(a.first == b.first)
		return a.second < b.second;
	else return a.first > b.first;
}
class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int,int>> result;
		if(people.size() == 0)
			return result;
		sort(people.begin(),people.end(),cmp);
		/*for(auto it = people.begin();it != people.end(); it++) {
			result.insert(make_pair((*it).first,(*it).second));
		}*/
		for(auto it : people) {
            result.insert(result.begin() + it.second, it); //insert(where.value)
        }
		return result;
    }
};