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
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > result;
		int n=nums.size();
		vector<int> rest(n);
		if(n<3) return result;	//n���κΣ������Ϸ��ؿ�
		sort(nums.begin(),nums.end());	//����֤����Ķ���
		vector<int> temp(3);
		for(int i=0;i<n;i++)
		{
			if(nums[i]>0) break;//��������
			if(i>0&&nums[i]==nums[i-1]) continue;	//��ȣ��ȷ���

			int begin=i+1,end=n-1;	//�Ժ����Ԫ��
			while(begin<end)
			{
				int sum=nums[i]+nums[begin]+nums[end];
				if(sum==0)
				{
					temp[0]=nums[i];
					temp[1]=nums[begin];
					temp[2]=nums[end];
					result.push_back(temp);
					begin++;
					end--;
					while(begin<end&&nums[begin]==nums[begin-1]) begin++;	//��ǰ��
					while(begin<end&&nums[end]==nums[end+1]) end--;		//�ͺ���
				}
				else if(sum>0)	//���ˡ��ú�Сһ��
					end--;
				else begin++;
				}
			}
		return result;
	}
};