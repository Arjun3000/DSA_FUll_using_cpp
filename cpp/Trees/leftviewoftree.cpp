#include<iostream>
#include<queue>
using namespace std;
class treenode{
    public:
    int data;
    treenode* left;
    treenode* right;

    treenode(int val)
    {
        data = val;
        left = NULL;
        right= NULL;
    }
};
void leftview(treenode* root)
{
   if(root == NULL)
   {
     return;
   }
   queue<treenode*> q;
   q.push(root);
   while(!q.empty())
   {
     int lsize = q.size();

     for(int i = 0 ;i<lsize;i++)
     {
        treenode* curr = q.front();
        q.pop();

        if(i==0)cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
     }
   }

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

    leftview(root);
    return 0;
}