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
    pair<int,int> dfs(TreeNode* root){
        if(!root)return {0,0};
        auto [leftwithout,leftwith] = dfs(root->left);
        auto [rightwithout,rightwith] = dfs(root->right);
        //cout<<leftwithout<<" "<<leftwith<<" "<<rightwithout<<" "<<rightwith;
         return {max(leftwithout,leftwith)+max(rightwithout,rightwith),root->val+leftwithout+rightwithout};
    }
public:
    int rob(TreeNode* root) {
        auto result = dfs(root);
        return max(result.first, result.second);
    }
};