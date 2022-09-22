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
    int dia(TreeNode* root, int &diameter){
        if(!root)return 0;
        int leftsub=dia(root->left,diameter);
        int rightsub=dia(root->right,diameter);
        diameter=max(diameter,leftsub+rightsub);
        return max(leftsub,rightsub)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        dia(root,d);
        return d;
    }
};