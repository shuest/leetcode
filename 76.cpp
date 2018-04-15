#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
//Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n).
//
//For example,
//S = "ADOBECODEBANC"
//T = "ABC"
//
//Minimum window is "BANC".
//
//Note:
//If there is no such window in S that covers all characters in T, return the empty string "".
//
//If there are multiple such windows, you are guaranteed that there will always be only one unique minimum window in S.
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int digit[256],tot;
		memset(digit,0,sizeof(digit));//��ʼ0
		for(int i=0;i<t.size();i++)
			digit[t[i]]++;
		tot=t.size();

		int ret=s.size()+1;//��ʼ�ܳ��ȼ�һ������һ�������
		int head=0,anshead=0;
		for(int i=0;i<s.size();i++)
		{
			int tp=(int) s[i];
			if(digit[s[i]]>0) tot--;	//����֮ǰ>0,�е�
			digit[s[i]]--;		//��--
			while(tot==0)	//tot���0ʱ
			{
				if(ret>i-head+1)
					ret=i-head+1,anshead=head;	//���ϸĽ�rot��ʹ֮��С��
				if(digit[s[head]]==0) tot++;	//Ҫ���ߵ�����֮ǰ����t��ģ����Բ���0
				digit[s[head]]++;
				head++;
			}
		}
		if(ret>s.size()) return ""; //�Ƿ�
		return s.substr(anshead,ret);
    }
};
