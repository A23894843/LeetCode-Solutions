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
    bool BST (TreeNode* root, long long l, long long r) {
        if (root == NULL)  return true;

        if (root-> val <= l or root-> val >= r)   return false;
        
        return (BST (root-> left, l, root-> val) and BST (root-> right, root-> val, r));
    }
public:
    bool isValidBST(TreeNode* root) {
        return BST (root, LLONG_MIN, LLONG_MAX);
    }
};