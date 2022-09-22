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
    int depth(TreeNode* root){
        if(!root)return 0;
        return max(depth(root->left),depth(root->right))+1;
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        int lefttree=depth(root->left);
        int righttree=depth(root->right);
        return abs(lefttree-righttree)<=1 && isBalanced(root->left) && isBalanced(root->right);
    }
};
//TC: O(n)
//SC: O(n)/O(1)