struct Command{
	string s;	//go,print
	TreeNode *node;
	Command(string s,TreeNode* node):s(s),node(node){}
  };

 class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
		vector<int> res;
		if(root==NULL)
			return res;
		stack<Command> s;
		s.push(Command("go",root));
		while(!s.empty())
		{
			Command c=s.top();
			s.pop();
			if(c.s=="print")
				res.push_back(c.node->val);
			else 
			{
				s.push(Command("print",c.node));
				if(c.node->right)
					s.push(Command("go",c.node->right));
				
				if(c.node->left)
					s.push(Command("go",c.node->left));
				
			}
		}
		return res;
	}
 };