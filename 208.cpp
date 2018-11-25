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

class TrieNode {
public:
	TrieNode *child[26];
	bool isWord;
};
class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    };
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *p = root;
		for(int i = 0; i < word.size(); i++) {
			int num = word[i] - 'a';
			if(p->child[num] == NULL)
				p->child[num] = new TrieNode();
			p = p->child[num];
		}
		p->isWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *p = root;
		for(int i = 0; i < word.size(); i++) 
		{
			int num = word[i] - 'a';
			if(p->child[num] == NULL)
				return false;
			p = p->child[num];
		}
		return p->isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
		TrieNode *p = root;
		for(int i = 0; i < prefix.size(); i++) {
			int num = prefix[i] - 'a';
			if(p->child[num] == NULL)
				return false;
			p = p->child[num];
		}
		return true;
    }
private:
	TrieNode *root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */