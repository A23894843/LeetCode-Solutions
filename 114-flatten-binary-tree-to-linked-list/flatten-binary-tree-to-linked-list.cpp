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
    void preorder (TreeNode* root, vector <TreeNode*>& result) {
        if (!root)  return;

        result.push_back(root);

        preorder (root-> left, result);

        preorder (root-> right, result);
    }

public:
    void flatten(TreeNode* root) {
        vector <TreeNode*> result;

        preorder (root, result);

        TreeNode* prev = root;

        for (int i = 1; i < result.size(); i++) {
            prev-> left = NULL;

            prev-> right = result[i];

            prev = prev-> right;
        }
    }
};