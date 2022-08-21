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
    bool isIdentical(TreeNode* R, TreeNode* S){
        if(R==NULL && S==NULL)return true;
        if(R==NULL || S==NULL)return false;
        
        return R->val==S->val && isIdentical(R->left,S->left) && isIdentical(R->right, S->right);
        
    }
public:
    bool isSubtree(TreeNode* R, TreeNode* S) {
        if(R==NULL)return false;
        if(S==NULL)return true;
        if(isIdentical(R,S))return true;
        return isSubtree(R->left,S) || isSubtree(R->right,S);
    }
};