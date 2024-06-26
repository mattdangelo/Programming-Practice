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
    vector<int> res;

public:
    void recRecurse(TreeNode* root) {
        if(root->left) {
            recRecurse(root->left);
        }

        res.push_back(root->val);

        if(root->right) {
            recRecurse(root->right);
        }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) {
            return res;
        }

        recRecurse(root);
        return res;
    }
};
