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
    int depth = 0;
    int longest = 0;
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return depth;
        }

        depth++;
        if (depth > longest) {
            longest = depth;
        }
        maxDepth(root->left);
        maxDepth(root->right);
        depth--;

        return longest;
    }
};
