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
    vector<int>in;
    int i=0;
private:
    void inorder(TreeNode* root){
        if(root==NULL)return;
        
        inorder(root->left);
        in.push_back(root->val);
        inorder(root->right);
    }
    void correct(TreeNode* root){
        if(!root)return;
        
        correct(root->left);
        if(in[i]!=root->val)swap(in[i],root->val);
        i++;
        correct(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(in.begin(),in.end());
        correct(root);
    }
};