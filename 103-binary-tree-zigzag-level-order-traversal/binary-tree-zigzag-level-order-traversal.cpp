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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
           vector<vector<int>> res;
        queue<TreeNode *> q;
        if(root==NULL) return res;
        q.push(root);
        int flag=0;
        while(!q.empty()){
            int size=q.size();
            vector<int> temp;
            while(size-->0){
                root=q.front();
                q.pop();
                temp.push_back(root->val);
                if(root->left) q.push(root->left);
                if(root->right) q.push(root->right);
            }
            if(flag==1) reverse(temp.begin(),temp.end());
            res.push_back(temp);
            flag=1-flag;
    }
    return res;
    }
};