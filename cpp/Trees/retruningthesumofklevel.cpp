#include<iostream>
#include<queue>
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
int sumatk(treenode* root ,int k)
{
    if(root==NULL)
    {
        return -1;
    }
    queue<treenode*> q;
    q.push(root);
    q.push(NULL);
    int level = 0;
    int sum = 0;

    while(!q.empty())
    {
        treenode* temp = q.front();
        q.pop();

        if(temp != NULL)
        {
            if(level == k)
            {
                sum += temp->data;
            }
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        else if(!q.empty())
        {
            level++;
            q.push(NULL);
        }
    }
    return sum;

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

    cout<<sumatk(root,2);

}