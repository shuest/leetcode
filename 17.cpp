#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
using namespace std;

class Solution {
private:
const string letterMap[10]={
		" ", //0
		"",
		"abc",
		"def",
		"ghi",
		"jkl",
		"mno",
		"pqrs",
		"tuv",
		"wxyz"
	};
	 vector<string> res;
	void findCombination(const string &digits,int index,const string &s)
	{
		//digits:要处理的数字字符串。index:数位 s:之前数字转换的字母字符串
		//s:从digits[0,n-1]
		if(index==digits.size())
		{
			//保存s
			res.push_back(s);
			return;
		}
		char c = digits[index];
		string letters=letterMap[c-'0'];
		for(int i=0;i<letters.size();i++)
		{
			findCombination(digits,index+1,s+letters[i]);
		}
		return;
	}
public:
    vector<string> letterCombinations(string digits) {
		res.clear();
		if(digits=="")
			return res;
		findCombination(digits,0,"");
		return res;
    }
};