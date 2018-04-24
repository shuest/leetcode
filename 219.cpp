#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<unordered_set>

using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> record;
		for(int i=0;i<nums.size();i++)
		{
			if(record.find(nums[i])!=record.end())
				return true;		//�ҵ��ˣ�֮ǰ�й���
			record.insert(nums[i]);
			//��֤��������K��Ԫ�أ�����ɾ��һ��
			if(record.size()==k+1)
				record.erase(nums[i-k]);	//ԭ��0������4��I��3�����ȥ��4-���µ�i��ɾ��0���У���i-k
		}
		return false;
    }
};