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
		memset(digit,0,sizeof(digit));//初始0
		for(int i=0;i<t.size();i++)
			digit[t[i]]++;
		tot=t.size();

		int ret=s.size()+1;//初始总长度加一，这样一定会更新
		int head=0,anshead=0;
		for(int i=0;i<s.size();i++)
		{
			int tp=(int) s[i];
			if(digit[s[i]]>0) tot--;	//右移之前>0,有的
			digit[s[i]]--;		//都--
			while(tot==0)	//tot变成0时
			{
				if(ret>i-head+1)
					ret=i-head+1,anshead=head;	//不断改进rot，使之最小。
				if(digit[s[head]]==0) tot++;	//要移走的数，之前是在t里的，所以才是0
				digit[s[head]]++;
				head++;
			}
		}
		if(ret>s.size()) return ""; //非法
		return s.substr(anshead,ret);
    }
};
