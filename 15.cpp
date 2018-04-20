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
		if(n<3) return result;	//n是任何，不符合返回空
		sort(nums.begin(),nums.end());	//排序保证后面的都大
		vector<int> temp(3);
		for(int i=0;i<n;i++)
		{
			if(nums[i]>0) break;//都是正的
			if(i>0&&nums[i]==nums[i-1]) continue;	//相等，先放下

			int begin=i+1,end=n-1;	//对后面的元素
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
					while(begin<end&&nums[begin]==nums[begin-1]) begin++;	//和前面
					while(begin<end&&nums[end]==nums[end+1]) end--;		//和后面
				}
				else if(sum>0)	//大了。让和小一点
					end--;
				else begin++;
				}
			}
		return result;
	}
};