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

void levelorder(treenode* root){
    if(root == NULL)
    {
        return;
    }
    queue<treenode*> q;

    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        treenode* temp = q.front();
        q.pop();
            if(temp!=NULL)
            {
            cout<<temp->data<<" ";

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
                q.push(NULL);
            }
    }

}
int main()
{
    treenode* root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);

    root->left->left = new treenode(4);
    root->left->right = new treenode(5);

    root->right->left = new treenode(6);
    root->right->right = new treenode(7);

    levelorder(root);

}