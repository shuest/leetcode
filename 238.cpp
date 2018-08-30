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



//ÿ������λ���ϵ�����������λ�ϵ����ĳ˻�
//��ֹ����ʹ�ó���
//��������������ĳ˻��������ұ��������ĳ˻�
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> v(nums.size());
		int right = 1;
		v[0]=1;
		for(int i = 1; i < nums.size(); i++){
			v[i] = nums[i-1] * v[i-1];
		}//v[i]��ǰ������˻�
		for(int i = nums.size()-2; i >= 0;i--){
			right = right * nums[i+1];  //i+1�����һ����right���ұ����ĳ˻�
			v[i] = v[i] * right;
		}
		return v;
    }
};