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
// private:
//     void preorderTraversal(TreeNode* root, vector<int>&ans){
//         if(root==NULL)return;
//         ans.push_back(root->val);
//         preorderTraversal(root->left,ans);
//         preorderTraversal(root->right,ans);
//     }
public:
    vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         preorderTraversal(root, ans);
//         return ans;
        vector<int>ans;
        if(root==NULL)return ans;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty()){
            //int n=s.size();
            root=s.top();
            s.pop();
            ans.push_back(root->val);
            if(root->right!=NULL)s.push(root->right);
            if(root->left!=NULL)s.push(root->left);
            
        }
        return ans;
    }
};