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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == nullptr && q == nullptr)return true;
        if(!p && q || p && !q)return false;

        queue<TreeNode*> pq;
        queue<TreeNode*> qq;
        pq.push(p);qq.push(q);
        while(!pq.empty() && !qq.empty()){
            TreeNode* qn = qq.front();
            TreeNode* pn = pq.front();
            pq.pop();qq.pop();

            if(!qn ^ !pn)return false;

            if(qn && pn){
                if(qn->val != pn->val)return false;
                qq.push(qn->right);
                qq.push(qn->left);
                pq.push(pn->right);
                pq.push(pn->left);

            }
        }
        if(!pq.empty() || !qq.empty())return false;
        
        return true;
    }
};
