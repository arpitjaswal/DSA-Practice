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
    TreeNode* helper(vector<int>nums, int i, int j){
        if(i>j)return NULL;
        int mid=i+(j-i)/2;
        TreeNode* node= new TreeNode(nums[mid]);
        node->left=helper(nums, i, mid-1);
        node->right=helper(nums, mid+1,j);
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return helper(nums, 0, n-1);
    }
};