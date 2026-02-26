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
    void inorder(TreeNode* node, vector<int>& res){
        if(!node) return;
        inorder(node->left, res);
        res.push_back(node->val);
        inorder(node->right, res);
    }
    
    TreeNode* build(vector<int>& res, int l, int r){
        if(l > r) return NULL;
        int mid = (l+r)/2;
        TreeNode* node = new TreeNode(res[mid]);
        node->left = build(res, l, mid-1);
        node->right = build(res, mid+1, r);
        return node;
    }

    TreeNode* balanceBST(TreeNode* root) {
        //collect all the nodes from the binary tree using inorder traversal
        // and then build the tree that guarentees a balanced version of the tree
        vector<int> in_order;
        inorder(root, in_order);
        return build(in_order, 0, in_order.size()-1);
        
    }
};