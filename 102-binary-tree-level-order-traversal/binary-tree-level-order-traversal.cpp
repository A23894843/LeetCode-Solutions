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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector <vector <int>> result;
        queue <TreeNode*> q;

        if (!root)  return result;

        q.push(root);
    
        while (!q.empty())  {
            int level_size = q.size();
            vector <int> ans;
            TreeNode* current;

            for (int i = 0; i < level_size; i++) {
                current = q.front();
                q.pop();
                ans.push_back(current-> val);

                if (current-> left)    q.push(current-> left);
                if (current-> right)    q.push(current-> right);
            }   result.push_back(ans);
        }
        return result;
    }
};