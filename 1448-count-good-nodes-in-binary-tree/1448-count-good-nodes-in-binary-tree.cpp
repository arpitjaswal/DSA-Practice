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
    int dfs(TreeNode* root, int maxi){
        //base condition
        if(!root)return 0;
        int ans=0;
        if(root->val>=maxi){
            ans++;
            maxi=root->val;
        }
        return ans+dfs(root->left,maxi)+dfs(root->right,maxi);
    }
public:
    int goodNodes(TreeNode* root) {
        return dfs(root,INT_MIN);
    }
};