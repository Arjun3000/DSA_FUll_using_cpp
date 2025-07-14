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
treenode* buildtree()
{
    int rootdata;
    cout<<"enter the root value (-1 for NULL) : ";
    cin>>rootdata;

    if(rootdata == -1) return NULL;

    treenode* root = new treenode(rootdata);
    queue<treenode*>q;
    q.push(root);
    while (!q.empty())
    {
        treenode * curr = q.front();
        q.pop();

        int leftdata,rightdata;

        cout<<"enter left and right of "<<curr->data<<" (-1 for null) ";
        cin>>leftdata>>rightdata;

        if(leftdata!=-1)
        {
            curr->left = new treenode(leftdata);
            q.push(curr->left);
        }
        if(rightdata!=-1)
        {
            curr->right = new treenode(rightdata);
            q.push(curr->right);
        }

    }
    return root;
    
}
void preorder(treenode* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    treenode* builtRoot = buildtree();
    cout << "Preorder traversal of tree: ";
    preorder(builtRoot);
    cout << endl;

}