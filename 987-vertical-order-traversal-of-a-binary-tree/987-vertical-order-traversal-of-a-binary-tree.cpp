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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        vector<vector<int>>res;
        if(root==NULL)return res;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>>t=q.front();
            q.pop();
            TreeNode* front=t.first;
            int hori=t.second.first;
            int level=t.second.second;
            nodes[hori][level].push_back(front->val);
            if(front->left)q.push(make_pair(front->left,make_pair(hori-1,level+1)));
            if(front->right)q.push(make_pair(front->right,make_pair(hori+1,level+1)));
        }
         for(auto p : nodes){
            vector<int> col;
            for(auto i : p.second){
                sort(i.second.begin(),i.second.end());
                col.insert(col.end(), i.second.begin(), i.second.end());
            }
            
            res.push_back(col);
        }
            
    return res;    
    }
};