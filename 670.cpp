#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stack>
#include<queue>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
		int n = s.size();
		vector<int> v1,v2;
		for(int i = 0; i < n; i++) {
			v1.push_back(s[i]-'0');
		}
		v2 = v1;
		//v2ԭʼ��v1������
		sort(v1.begin(),v1.end(),cmp);
		for(int i = 0; i < n; i++) {
			if(v1[i] != v2[i] && v1[i] != v1[i + 1]) { //���ظ���������������ǰ��
				int j = i + 1;
				for(; j < n; j++) {
					if(v2[j] == v1[i]) {
						break;
					}
				}
				swap(v2[j],v2[i]);
				break;
			}
			else if( v1[i] != v2[i] &&v1[i] == v1[i + 1]) { //���ظ��ģ�����ͬ���У����һ���������ŵ���ǰ��
				int j = n - 1;
				for(; j >= 0; j--) {
					if(v2[j] == v1[i]) {
						break;
					}
				}
				swap(v2[j],v2[i]);
				break;
			}
		}
		s = "";
		for(int i = 0; i < n; i++) {
			s += (v2[i] + '0');
		}
		return stoi(s);
    }
};