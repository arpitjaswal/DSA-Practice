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
    int maxDepth(TreeNode* root) {
        //base condition: root is null->there is no tree, height is 0
        if(!root)return 0;
        //from the root of the tree, out of all the possible heights of the path sums i.e. distance from root to the leaf node, find the maximum and return by adding one to it i.e. root node
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};