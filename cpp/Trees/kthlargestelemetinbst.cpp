/*The Node structure is defined as
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
   int count = 0;
  int ans = -1 ;
void seclar(Node *root, int k)
{
    if(root == NULL)
    {
        return;
    }
    seclar(root->right,k);
    count++;
    if(k == count)
    {
        ans = root->data;
        return;
    }
    seclar(root->left,k);
}
    int kthLargest(Node *root, int k) {
        // Your code here
        seclar(root,k);
        return ans;
    }
};