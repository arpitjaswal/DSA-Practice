/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    void mark_parents(TreeNode* root, TreeNode* target, unordered_map<TreeNode*,TreeNode*>&parent_track){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* c=q.front();
            q.pop();
            if(c->left){
                parent_track[c->left]=c;
                q.push(c->left);
            }
            if(c->right){
                parent_track[c->right]=c;
                q.push(c->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        unordered_map<TreeNode*,TreeNode*>parent_track;
        mark_parents(root, target, parent_track);
        unordered_map<TreeNode*, bool>visited;
        queue<TreeNode*>q;
        int current_level=0;
        visited[target]=true;
        q.push(target);
        while(!q.empty()){
            int n=q.size();
            if(current_level++==k)break;
            for(int i=0;i<n;i++){
                TreeNode* c=q.front();
            q.pop();
            if(c->left && !visited[c->left]){
                q.push(c->left);
                visited[c->left]=true;
            }
            if(c->right && !visited[c->right]){
                q.push(c->right);
                visited[c->right]=true;
            }
            if(parent_track[c] &&!visited[parent_track[c]]){
                q.push(parent_track[c]);
                visited[parent_track[c]]=true;
            }
            }
        }
        while(!q.empty()){
            TreeNode* c=q.front();
            q.pop();
            ans.push_back(c->val);
        }
        return ans;
    }
};