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

//求最后一个单词的长度
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
		int flag=0;
		for(int i=s.length()-1;i>=0;i--)
		{
			if(flag==0&&s[i]==' ')	//去掉末尾的空格
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