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
    bool isIsomorphic(string s, string t) {
        map<char,int> stoi;
		map<char,int> ttoi;
		int cnt=0;
		for(int i=0;i<s.size();i++)
		{
			if(stoi.find(s[i])==stoi.end()	)//sû��ʱ
			{
				if(ttoi.find(t[i])==ttoi.end())	//tû��ʱ
				{
					stoi[s[i]]=cnt;
					ttoi[t[i]]=cnt;
					cnt++;
				}
				else return false;
			}
			else if(ttoi.find(t[i])==ttoi.end())
				return false;	//s�У�tû��
			else{	//����ʱ
				if(stoi[s[i]]!=ttoi[t[i]])
					return false;
			}
		}
		return true;
    }
};