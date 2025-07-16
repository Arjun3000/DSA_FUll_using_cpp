#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
template <typename T>
void inorder(TreeNode<T>* root, std::vector<T>& add) {
    if (root == NULL) {
        return;
    }
    inorder(root->left, add);
    add.push_back(root->data);
    inorder(root->right, add);
}

TreeNode<int>* flatten(TreeNode<int>* root)
    std::vector<int> inorderval;
    inorder(root, inorderval);

    int n = inorderval.size();
    if (n == 0) return nullptr;

    TreeNode<int>* newRoot = new TreeNode<int>(inorderval[0]);
    TreeNode<int>* curr = newRoot;

    for (int i = 1; i < n; i++)
    {
        TreeNode<int>* temp = new TreeNode<int>(inorderval[i]);
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    curr->left = NULL;
    curr->right = NULL;
    return newRoot;
}

}