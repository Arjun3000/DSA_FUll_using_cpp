/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& add) {
        if (root == NULL) {
            return;
        }
        inorder(root->left,add);
        add.push_back(root->val);
        inorder(root->right,add);
        
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> add;
        inorder(root, add);
        int left = 0;
        int right = add.size() - 1;
        int sum = 0;

        while (left < right) {
            sum = add[left] + add[right];
            if (sum == k)
                return true;
            else if (sum < k)
                left++;
            else
                right--;
        }
        return false;
    }
};