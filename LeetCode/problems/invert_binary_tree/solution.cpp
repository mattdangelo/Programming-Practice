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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) {
            return nullptr;    
        }
        
        if(root->left == nullptr && root->right == nullptr) {
            return root;
        }
        else if(root->left == nullptr) {
            root->left = root->right;
            root->right = nullptr;
            invertTree(root->left);
        }
        else if(root->right == nullptr) {
            root->right = root->left;
            root->left = nullptr;
            invertTree(root->right);
        }
        else {
            TreeNode* temp = root->right;
            root->right = root->left;
            root->left = temp;

            invertTree(root->left);
            invertTree(root->right);
        }

        return root;
    }
};