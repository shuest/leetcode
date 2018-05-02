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
using namespace std;


  // This is the interface that allows for creating nested lists.
  // You should not implement it, or speculate about its implementation
  class NestedInteger {
    public:
      // Return true if this NestedInteger holds a single integer, rather than a nested list.
     bool isInteger() const;
 
      // Return the single integer that this NestedInteger holds, if it holds a single integer
      // The result is undefined if this NestedInteger holds a nested list
      int getInteger() const;

     // Return the nested list that this NestedInteger holds, if it holds a nested list
     // The result is undefined if this NestedInteger holds a single integer
     const vector<NestedInteger> &getList() const;
  };
 
class NestedIterator {
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
		
		for(int i=nestedList.size()-1;i>=0;i--)
			s.push(nestedList[i]);

    }

    int next() {
        //下一个整数
		NestedInteger t=s.top();
		s.pop();
		return t.getInteger();
    }

    bool hasNext() {
        //有没有下一项
		while(!s.empty())
		{
			NestedInteger t=s.top();
			
			if(t.isInteger()==true)
				return true;
			s.pop();
			//比如111，遇到前两个11并不把整个迭代器弹出，
			//遇到第三个才会弹出，所以再后边
			for(int i=t.getList().size()-1;i>=0;i--)
			{
				s.push(t.getList()[i]);
			}
		}
		return false;
    }
private:
	stack<NestedInteger> s;
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */