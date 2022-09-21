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
private:
    void preordert(TreeNode* root,vector<int>&preorder){
        if(root==NULL)return;
        preorder.push_back(root->val);
        preordert(root->left,preorder);
        preordert(root->right,preorder);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>preorder;
        preordert(root,preorder);
        return preorder;
    }
};