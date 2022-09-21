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
    void inordert(TreeNode* root, vector<int>&inorder){
        if(root==NULL)return;
        inordert(root->left,inorder);
        inorder.push_back(root->val);
        inordert(root->right,inorder);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        inordert(root,inorder);
        return inorder;
    }
};