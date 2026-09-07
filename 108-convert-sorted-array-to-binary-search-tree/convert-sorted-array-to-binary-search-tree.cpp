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
    TreeNode* tree (vector <int>& nums, int start, int end) {
        if (start == end)   return NULL;
        int mid = (start + end) / 2;

        TreeNode* root = new TreeNode(nums[mid]);
        root-> left = tree (nums, start, mid);
        root-> right = tree (nums, mid + 1, end);

        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.size() == 0)   return NULL;

        return tree (nums, 0, nums.size());
    }
};