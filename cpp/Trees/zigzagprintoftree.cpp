#include<iostream>
#include<queue>
#include<vector>
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
vector<int> zigzag(treenode* root)
{
    vector<int>result;
    if(root==NULL) return result;

    queue<treenode*>q;
    q.push(root);
    bool ltr = true;

    while (!q.empty())
    {
        int lsize = q.size();
        vector<int>level(lsize);

        for(int i = 0 ;i<lsize;i++)
        {
            treenode* temp = q.front();
            q.pop();
            
            int index = ltr ? i : (lsize -1-i);
            level[index] = temp->data;

            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        for(int i : level)
        {
            result.push_back(i);
        }
        ltr = !ltr;
    }
    return result;
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
    vector<int> res = zigzag(root);
    for(int val : res) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}