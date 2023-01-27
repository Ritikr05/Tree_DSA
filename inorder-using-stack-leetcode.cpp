/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
	    vector<int> vals;
	    if (!root)
		    return vals;
	    stack<TreeNode*> stk;
	    stk.push(root);
	    bool goRight = false;

	    while (!stk.empty())
	    {
		    TreeNode *tmp = stk.top();
		    if (goRight)
		    {
			    vals.push_back(tmp->val);
			    stk.pop();
			    if (tmp->right)
			    {
				    stk.push(tmp->right);
				    goRight = false;
			    }
		    }
		    else
		    {
			    if (tmp->left)
			    {
				    stk.push(tmp->left);
			    }
			    else
			    {
				    goRight = true;
			    }
		    }
	    }
	    return vals;
    }
};
