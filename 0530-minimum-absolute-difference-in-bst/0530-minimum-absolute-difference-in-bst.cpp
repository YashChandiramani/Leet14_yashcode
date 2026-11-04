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
    void inorder(TreeNode* root, vector<int>&a){
        if(root == nullptr){
            return;
        }
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> a;
        inorder(root, a);
        int n = a.size();
        int min_ = INT_MAX;
        for(int i = 0; i < n; ++i){
            for(int j = i + 1; j < n; ++j){
                int diff = abs(a[i] - a[j]);
                min_ = min(diff, min_);
            }
        }
        return min_;
    }
};