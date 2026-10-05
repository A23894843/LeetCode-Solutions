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
    vector <vector <int>> result;
    void sol (TreeNode* root, int sum, int targetSum, vector <int>& arr)    {
        if (!root)  return;
        sum += root-> val;
        arr.push_back (root-> val);
        if (!root-> left && !root-> right)    {
            if (sum == targetSum)   result.push_back (arr);
            arr.pop_back();
            return;
        }
        sol (root-> left, sum, targetSum, arr);
        sol (root-> right, sum, targetSum, arr);
        arr.pop_back();
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector <int> arr;
        sol (root, 0, targetSum, arr);
        return result;
    }
};