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

//�����һ�����ʵĳ���
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
		int flag=0;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(flag==0&&s[i]==' ')	//ȥ��ĩβ�Ŀո�
				continue;
			if(s[i]!=' ')
			{
				flag=1;
				cnt++;
			}
			else break;
		}
		return cnt;
    }
};