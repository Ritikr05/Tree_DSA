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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        recurpreorder(root, ans);
        return ans;
    }
  
    void recurpreorder(TreeNode* root, vector<int>&A){
        if(!root) return;
        A.push_back(root -> val);
    recurpreorder(root -> left, A);
        
        recurpreorder(root -> right, A);
    }
};
