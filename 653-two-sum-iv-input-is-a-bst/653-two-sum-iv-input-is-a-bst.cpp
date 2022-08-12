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
        inordertrav(root->left,inorder);
        inorder.push_back(root->val);
        inordertrav(root->right, inorder);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        inordertrav(root, inorder);
        unordered_map<int,int>m;
        // for(auto x: inorder){
        //     m[x]++;
        // }
        //if(inorder.size()<2)return false;
        for(int i=0;i<inorder.size();i++){
            if(m.find(k-inorder[i])!=m.end())return true;
            m[inorder[i]]=i;
        }
        return false;
    }
};