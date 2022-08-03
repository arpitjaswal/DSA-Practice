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
    int dfsheight(TreeNode* root){
        if(root==NULL)return false;
        
        int left=dfsheight(root->left);
        if(left==-1)return -1;
        int right=dfsheight(root->right);
        if(right==-1)return -1;
        //if(left==-1 && right==-1)return -1;
        if(abs(left-right)>1)return -1;
        return 1+max(left,right);
    }
public:
    bool isBalanced(TreeNode* root) {
        return dfsheight(root)!=-1;
    }
};