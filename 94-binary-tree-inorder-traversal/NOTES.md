* class Solution {
public:
void inorderfunction(TreeNode* root, vector<int>&nodes){
//base condition
if(!root)return;
//take left child as root
inorderfunction(root->left,nodes);
//push node value
nodes.push_back(root->val);
//take right child as root
inorderfunction(root->right,nodes);
}
//main function
vector<int> inorderTraversal(TreeNode* root) {
vector<int>nodes;
inorderfunction(root,nodes);
return nodes;
}
};
*