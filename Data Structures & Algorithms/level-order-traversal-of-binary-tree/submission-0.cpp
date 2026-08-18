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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root){return {};}
        vector<vector<int>> res;
        queue<TreeNode* > q;
        q.push(root);

        while(!q.empty()){
            vector<int> ins;
            int s = q.size();
            for(int i = 0;i<s;i++){
                TreeNode* ele = q.front();
                q.pop();
                ins.push_back(ele->val);
                if(ele->left){q.push(ele->left);}
                if(ele->right){q.push(ele->right);}
            }
            res.push_back(ins);
        }
        return res;
    }
};
