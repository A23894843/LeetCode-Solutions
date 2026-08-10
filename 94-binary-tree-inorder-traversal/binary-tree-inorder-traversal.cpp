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
    void traversal (TreeNode* root, vector <int>& result)   {
        if (!root)  return;

        traversal (root-> left, result);
        result.push_back(root-> val);
        traversal (root-> right, result);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> result;

        traversal (root, result);

        return result;
    }
};