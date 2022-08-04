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
    int maxdepth(TreeNode* root, int &d){
        if(root==NULL)return 0;
        int leftsub=maxdepth(root->left, d);
        int rightsub=maxdepth(root->right,d);
        d=max(d, leftsub+rightsub);
        return max(leftsub,rightsub)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        maxdepth(root,diameter);
        return diameter;
    }
};