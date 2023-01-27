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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        recurPostorder(root, ans);
        return ans;
    }
    
    void recurPostorder(TreeNode* root, vector<int>&A){
        if(!root)return;
        recurPostorder(root ->left, A);
        recurPostorder(root ->right, A);
        A.push_back(root ->val);
    }
    
};
