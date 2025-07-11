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
int height(treenode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh,rh)+1;
}
int main()
{
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);

    root -> left ->left = new treenode(4);
    root -> left ->right = new treenode(5);

    root -> right -> left = new treenode(6);
    root -> left -> left -> left = new treenode(7);
    cout<<height(root);

}