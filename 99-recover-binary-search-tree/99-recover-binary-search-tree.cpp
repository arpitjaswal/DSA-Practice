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
    TreeNode* prev,*first,*middle,*last;
private:
    void inorder(TreeNode* root){
        if(root==NULL)return;
        
        inorder(root->left);
        if(prev!=NULL && prev->val>root->val){
            if(first==NULL){
                first=prev;
                middle=root;
            }
            else
                last=root;
        }
        prev=root;
        inorder(root->right);
    }
public:
    void recoverTree(TreeNode* root) {
        prev=first=middle=last=NULL;
        //prev= new TreeNode(INT_MIN);
        inorder(root);
        if(last!=NULL)swap(first->val,last->val);
        else
            swap(first->val,middle->val);
    }
};