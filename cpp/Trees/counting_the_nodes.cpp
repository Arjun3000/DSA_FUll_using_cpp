#include<iostream>
using namespace std;
class treenode
{
    public:
    int data;
    treenode* right;
    treenode* left;

    treenode(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
int count(treenode* root)
{
    if(root==NULL)return 0;
    return 1 + count(root->left)+count(root->right);
}
int main()
{
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);

    root -> left ->left = new treenode(4);
    root -> left ->right = new treenode(5);

    root -> right -> left = new treenode(6);
    root -> right -> right = new treenode(7);
    cout<<count (root);

}