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
    TreeNode* helper(vector<int>& inorder,int is,int ie, vector<int>& postorder,int ps, int pe, unordered_map<int,int>&m){
        if(is>ie || ps>pe)return NULL;
        TreeNode* root= new TreeNode(postorder[pe]);
        int inroot=m[root->val];
        int lefts=inroot-is;
        root->left=helper(inorder,is,inroot-1,postorder,ps,ps+lefts-1,m);
        root->right=helper(inorder,inroot+1,ie,postorder,ps+lefts,pe-1,m);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>m;
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        return helper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,m);
    }
};