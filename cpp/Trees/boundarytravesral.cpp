class Solution {
    public:
        // Helper to check if a node is a leaf
        bool isLeaf(Node* node) {
                return node && !node->left && !node->right;
        }

        // Traverse the left boundary (excluding leaves)
        void traverseLeft(Node* node, vector<int>& ans) {
                Node* curr = node->left;
                while (curr) {
                        if (!isLeaf(curr)) ans.push_back(curr->data);
                        if (curr->left) curr = curr->left;
                        else curr = curr->right;
                }
        }

        // Traverse all leaf nodes (left to right)
        void traverseLeaves(Node* node, vector<int>& ans) {
                if (!node) return;
                if (isLeaf(node)) {
                        ans.push_back(node->data);
                        return;
                }
                traverseLeaves(node->left, ans);
                traverseLeaves(node->right, ans);
        }

        // Traverse the right boundary (excluding leaves), collect in reverse
        void traverseRight(Node* node, vector<int>& ans) {
                vector<int> tmp;
                Node* curr = node->right;
                while (curr) {
                        if (!isLeaf(curr)) tmp.push_back(curr->data);
                        if (curr->right) curr = curr->right;
                        else curr = curr->left;
                }
                // Add in reverse order
                for (int i = tmp.size() - 1; i >= 0; --i)
                        ans.push_back(tmp[i]);
        }

        vector<int> boundaryTraversal(Node *root) {
                vector<int> ans;
                if (!root) return ans;
                if (!isLeaf(root)) ans.push_back(root->data);

                traverseLeft(root, ans);
                traverseLeaves(root, ans);
                traverseRight(root, ans);

                return ans;
        }
};