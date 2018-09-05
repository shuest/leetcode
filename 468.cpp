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
class Solution {
public:
    string validIPAddress(string IP) {
		for (int i = 0; i < IP.length(); i++) {
			if (IP[i] == '.')
				return isIPv4(IP) ? "IPv4" : "Neither";
			else if (IP[i] == ':')
				return isIPv6(IP) ? "IPv6" : "Neither";
		}
		return "Neither";
    }
private:
	bool isIPv4(string IP) {
		int dotcnt = 0;
		for (int i = 0; i < IP.length(); i++) {
			if (IP[i] == '.')
				dotcnt++;
		}
		if (dotcnt != 3) return false;
		string temp = "";
		for (int i = 0; i < IP.length(); i++) {
		    if (IP[i] != '.')
		        temp += IP[i];
		    if (IP[i] == '.' || i == IP.length() - 1) {
		        if (temp.length() == 0 || temp.length() > 3) return false;
		        for (int j = 0; j < temp.length(); j++) {
		            if (!isdigit(temp[j])) return false;
		        }
		        int tempInt = stoi(temp);
		        if (tempInt > 255 || tempInt < 0) return false;
		        string convertString = to_string(tempInt);
		        if (convertString != temp) return false;
		        temp = "";
		    }
		}
		if (IP[IP.length()-1] == '.') return false;
		return true;
	}

	bool isIPv6(string IP) {
		int dotcnt = 0;
		for (int i = 0; i < IP.length(); i++) {
			if(IP[i] == ':')
				dotcnt++;
		}
		if (dotcnt != 7) return false;
		string temp = "";
		for (int i = 0; i < IP.length(); i++) {
		    if (IP[i] != ':')
		        temp += IP[i];
		    if (IP[i] == ':' || i == IP.length() - 1) {
		        if (temp.length() == 0 || temp.length() > 4) return false;
		        for (int j = 0; j < temp.length(); j++) {
		            if (!(isdigit(temp[j]) || (temp[j] >= 'a' && temp[j] <= 'f') || (temp[j] >= 'A' && temp[j] <= 'F'))) return false;
		        }
		        temp = "";
		    }
		}
		if (IP[IP.length()-1] == ':') return false;
		return true;
	}
};