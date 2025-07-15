/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    // Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root, int n1, int n2) {
        // Your code here
        if(root==NULL)
        {
            return NULL;
        }//first we have check if root is null
        if(root->data == n1 || root->data == n2)
        {
            return root;
        }
        //then for recursion we need the data of root once we will traverse
        Node*lans =  lca(root->left,n1,n2);
        Node*rans =  lca(root->right,n1,n2);
        //then we need what are we getting from both the sides of the root
        
        if(lans != NULL && rans!= NULL)
        {
            return root;
        }
        //if both are not null we need the root
        else if(lans!=NULL && rans == NULL)
        {
            return lans;
        }
        //iif one side is null we need the other side
        else if(lans==NULL && rans != NULL)
        {
            return rans;
        }
        else
        {
            return NULL;
        }
        // if got nothing just return the null
    }
};