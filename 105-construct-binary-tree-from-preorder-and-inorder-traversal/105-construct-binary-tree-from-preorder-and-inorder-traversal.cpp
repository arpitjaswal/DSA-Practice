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
    TreeNode* helper(vector<int>& preorder,int ps, int pe, vector<int>& inorder, int is, int ie, unordered_map<int,int>&m){
        if(ps>pe || is>ie)return NULL;
        TreeNode* root = new TreeNode(preorder[ps]);
        int inroot=m[root->val];
        int lefts=inroot-is;
        root->left=helper(preorder,ps+1,ps+lefts+1,inorder,is,inroot-1,m);
        root->right=helper(preorder,ps+lefts+1,pe,inorder,inroot+1,ie,m);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        return helper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
    }
};