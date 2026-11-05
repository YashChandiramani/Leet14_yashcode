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
    void inorder(TreeNode* root, vector<int>& a){
        if(root == nullptr){
            return;
        }
        inorder(root->left, a);
        a.push_back(root->val);
        inorder(root->right, a);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> a;
        inorder(root, a);
        vector<int> ans;
        unordered_map<int, int> freq;
        for(int i = 0; i < a.size(); ++i){
            freq[a[i]]++;
        }
        int maxi = 0;
        for(auto it : freq){
            maxi = max(maxi, it.second);
        }

        for(auto it : freq){
            if(it.second == maxi){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};