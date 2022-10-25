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
    void inordertrav(TreeNode* root, vector<int>&inorder){
        if(!root)return;
        inordertrav(root->left, inorder);
        inorder.push_back(root->val);
        inordertrav(root->right, inorder);
    }
public:
    bool isValidBST(TreeNode* root) {
        vector<int>inorder;
        inordertrav(root, inorder);
        for(int i=0;i<inorder.size()-1;i++){
            if(inorder[i]>=inorder[i+1])return false;
        }
        return true;
    }
};