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
    TreeNode* binaryTree (vector <int>& preorder, int prestart, int preend, vector <int>& inorder, int instart, int inend, map <int, int>& mp)    {
        if (prestart > preend || instart > inend)   return NULL;

        TreeNode* root = new TreeNode (preorder[prestart]);
        int elem = mp[root-> val];
        int nElem = elem - instart;

        root-> left = binaryTree (preorder, prestart + 1, prestart + nElem, inorder, instart, elem - 1, mp);
        root-> right = binaryTree (preorder, prestart + nElem + 1, preend, inorder, elem + 1, inend, mp);

        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int prestart = 0;
        int preend = preorder.size() - 1;
        int instart = 0;
        int inend = inorder.size() - 1;

        map <int, int> mp;

        for (int i = instart; i <= inend; i++)    {
            mp[inorder[i]] = i;
        }
        return binaryTree (preorder, prestart, preend, inorder, instart, inend, mp);
    }
};