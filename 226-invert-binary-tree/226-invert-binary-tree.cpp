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
public:
    TreeNode* invertTree(TreeNode* root) {
        // if(root==NULL)return NULL;
        // if(root){
        //     TreeNode* temp=root->right;
        //     root->right=root->left;
        //     root->left=temp;
        //     //swap(root->left,root,right);
        //     invertTree(root->right);
        //     invertTree(root->left);
        // }
        // return root;
        if(root==NULL)return NULL;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            TreeNode* temp=s.top();
            s.pop();
            swap(temp->left, temp->right);
            if(temp->left)s.push(temp->left);
            if(temp->right)s.push(temp->right);
        }
        return root;
    }
};