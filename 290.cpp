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
    bool wordPattern(string pattern, string str) {
        map<char,string> ptos;
		map<string,char> stop;
		int len=pattern.size();
		vector<string> s(len);
		int cnt=0; //���ٿո�
		for(int i=0;i<str.size();i++)
		{
			if(str[i]==' ')
				cnt++;
		}
		if(cnt!=len-1)	//��ʽ���Ȳ�ƥ��
			return false;
		int t=0;

		for(int i=0;i<str.length();i++)
		{
			if(str[i]!=' ')
			{
				s[t]+=str[i];
			} else
				t++;
			
		} //��ÿ�����ʼ�¼��s��

		for(int i=0;i<len;i++)
		{		//���ֹ�����ַ���			//����ַ���Ӧ���ַ�������str�е�
			if(ptos.find(pattern[i])!=ptos.end()&&ptos[pattern[i]]!=s[i]
			||stop.find(s[i])!=stop.end()&&stop[s[i]]!=pattern[i])
				//���ֹ�����ַ�����Ӧ���ַ����Ҹ��ַ���ԭ��pattern�еĲ���
				return false;
			ptos[pattern[i]]=s[i];	//ȷ���ַ���Ӧ���ַ���
			stop[s[i]]=pattern[i];	//ȷ���ַ�����Ӧ���ַ�
		}
		return true;
    }	
};