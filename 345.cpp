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
#include<cctype>
using namespace std;

//class Solution {
//public:
//    string reverseVowels(string s) {
//		int l=0,r=s.size()-1;
//		while(l<r)
//		{
//			while(l<r&&!isvowels(s[l]))
//				l++;
//			while(l<r&&!isvowels(s[r]))
//				r--;
//			if(l<r)
//			swap(s[l],s[r]);
//			l++;r--;
//
//		}
//		return s;
//    }
//	bool isvowels(char a)
//	{
//		if(tolower(a)==('a'||'e'||'i'||'o'||'u'))
//			return true;
//		else return false;
//	}
//};
class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;
        while(i < j) {
            while(i < j && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'
                        && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U') {
                i++;
            }
            while(i < j && s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u'
                        && s[j] != 'A' && s[j] != 'E' && s[j] != 'I' && s[j] != 'O' && s[j] != 'U') {
                j--;
            }
            if(i < j) {
                swap(s[i], s[j]);
            }
            i++;
            j--;
        }
        return s;
    }
};