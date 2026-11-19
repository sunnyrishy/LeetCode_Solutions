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
    void pre_order(TreeNode* root, vector<int>& res){
        if(root == NULL) return;
        res.push_back(root->val);
        if(root->left) pre_order(root->left, res);
        if(root->right) pre_order(root->right, res);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        pre_order(root, res);
        return res;
    }
};