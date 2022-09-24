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
public:
    void inorder(TreeNode* root){
        if(!root)return;
        inorder(root->left);
        in.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        unordered_map<int,int>m;
        for(int i=0;i<in.size();i++){
            if(m.find(k-in[i])!=m.end())return true;
            m[in[i]]=i;
        }
        return false;
    }
};