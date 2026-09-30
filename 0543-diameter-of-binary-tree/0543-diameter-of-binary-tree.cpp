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
    int findMax(TreeNode* root, int& max_){
        if(root == NULL){
            return 0;
        }
        int lefth = findMax(root->left, max_);
        int righth = findMax(root->right, max_);
        max_ = max(max_, lefth + righth);
        return 1 + max(lefth, righth);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int max_ = 0;
        findMax(root, max_);
        return max_;
    }
};