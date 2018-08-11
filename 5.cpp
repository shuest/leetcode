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
    string longestPalindrome(string s) {
		int len = s.length();
		if(len==0) return "";
		string result = s.substr(0,1);//µÚÒ»¸ö
		for(int i=0;i<=len-2;i++)
		{
			string temp=midToSide(s,i,i);
			if(temp.length()>result.length())
				result=temp;
			temp=midToSide(s,i,i+1);
			if(temp.length()>result.length())
				result=temp;
		}
		return result;
    }
	string midToSide(string s,int left,int right)
	{
		while(left>=0&&right<=s.length()-1&&s[left]==s[right])
		{
			left--;
			right++;
		}
		return s.substr(left+1,right-left-1);
	}
};

int main()
{


   return 0;
}